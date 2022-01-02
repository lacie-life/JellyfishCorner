#include <string>
#include <iostream>
#include <memory>
#include <functional>
#include <sstream>

#include <boost/serialization/serialization.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

using namespace std;

struct Address
{
    public:
        std::string street;
        std::string city;
        int suite;

        Address(const std::string& street, 
                const std::string& city,
                const int suite) : street{street}, city{city}, suite{suite}
        {
        }

        Address(const Address& other) 
        : street{other.street}, 
        city{other.city}, 
        suite{other.suite}
        {
        }

        Address()
            : street{""}, city{""}, suite{ 0 }
        {
        }

        friend ostream& operator<<(ostream& os, const Address& obj)
        {
            return os << "street: " << obj.street
                    << "city: " << obj.city
                    << "suite: " << obj.suite;
        }

    private:
        friend class boost::serialization::access;
        template<class Ar> void serialize(Ar& ar, const unsigned int version)
        {
            ar & street;
            ar & city;
            ar & suite;
        }
};

struct Contact
{
    string name;
    Address* address;

    Contact& operator=(const Contact& other)
    {
        if(this == &other)
            return *this;
        name = other.name;
        address = other.address;
        return *this;
    }

    Contact() : name(nullptr), address(nullptr)
    {} // required for serialization

    Contact(string name, Address* address)
        : name{name}, address{address}
    {
        // this->address = new Address{*address};
    }

    Contact(const Contact& other)
        : name{other.name}
        // , address{new Address{*other.address}}
    {
        address = new Address{
            other.address->street,
            other.address->city,
            other.address->suite
        };
    }

    private:
        friend class boost::serialization::access;

        template<class archive>
        void save(archive& ar, const unsigned version) const
        {
            ar << name;
            ar << address;
        }

        template<class archive>
        void load(archive& ar, const unsigned version)
        {
            ar >> name;
            arr >> address;
        }
    public:
        ~Contact()
        {
            delete address;
        }

        friend ostream& operator<<(ostream& os, const Contact& obj)
        {
            return os << "name: " << obj.name 
                      << "work at: " << *obj.address; // pointer
        }
};

struct EmployeeFactory
{
    static Contact main;
    static Contact aux;

    static unique_ptr<Contact> NewMainOfficeEmployee(string name, int suite)
    {
        //static Contact p{ "", new Address{ "123 East Dr", "London", 0 } };
        return NewEmployee(name, suit, main);
    }

    static unique_ptr<Contact> NewAuxOfficeEmployee(string name, int suite)
    {
        return NewEmployee(name, suite, aux);
    }

    private:
        static unique_ptr<Contact> NewEmployee(string name, int suite, Contact& proto)
        {
            auto result = make_unique<Contact>(proto);
            result->name = name;
            result->address->suite = suite;
            return result;
        }
};

int main()
{
    // Contact john{ "John Doe", new Address{"123 East Dr", "London"} };
    // Contact jane{ "Jane Doe", new Address{"123 East Dr", "London"} };

    auto addr = new Address{ "123 East Dr", "London", 0 /* ? */ };

    //Contact john{ "John Doe", addr };
    //john.address->suite = 123;
    //Contact jane{ "Jane Doe", addr };
    //jane.address->suite = 124;

    //Contact jane2{ jane }; // shallow copy
    //jane2.address->suite = 555;

    //
    //std::cout << jane2 << std::endl;

    // Duplicate the address whenever it is needed.
    /*Contact john{ "John Doe", new Address{*addr} };
    john.address->suite = 123;
    Contact jane{ "Jane Doe", new Address{*addr} };
    jane.address->suite = 125;
    cout << john << "\n" << jane << endl;*/

    //Contact employee{ "Unknown", new Address{"628 Happy St", "Joy", 0} };

    // You can use this prototype to create john and jane.
    //Contact john{ employee };
    //john.name = "John Doe";
    //john.address->suite = 123;

    //Contact jane{ employee };
    //jane.name = "Jane Doe";
    //jane.address->suite = 125;

    //cout << john << "\n" << jane << "\n";

    //delete addr;

    // 4. Boost Use the serialization library.

    auto clone = [](const Contact& c)
    {
        // 1. Serialize the contact.
        ostringstream oss;
        boost::archive::text_oarchive oa(oss);
        oa << c;
        string s = oss.str();

        // 2. Deserialize the contact.
        istringstream iss(oss.str());
        boost::archive::text_iarchive ia(iss);
        Contact result;
        ia >> result;
        return result;
    };

    // contact john = ...
    // contact jane = clone(john)

    //auto john = EmployeeFactory::NewAuxOfficeEmployee("John Doe", 123);
    //auto jane = EmployeeFactory::NewMainOfficeEmployee("Jane Doe", 125);

    //cout << *john << "\n" << *jane << "\n"; // Notice the dereferencing operator prepended to john.

    delete addr;

    getchar();
    return 0;
}



