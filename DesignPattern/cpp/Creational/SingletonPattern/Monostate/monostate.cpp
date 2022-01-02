#include <string>

class Printer
{
    static int id;
public:
    int get_id() const { return id; }
    void set_id(int value) { id = value; }
};

int main()
{
    Printer p;

    return 0;
}

