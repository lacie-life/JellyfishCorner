#include <iostream>
#include <vector>

struct Document
{
    std::string name;
    std::string data;
};

struct IPrinter
{
    virtual void print(std::vector<Document*> docs) = 0;
};

struct IScanner
{
    virtual void scan(std::vector<Document*> docs) = 0; 
};

struct Scanner : IScanner
{
    void scan(std::vector<Document*> docs) override;
};

struct Printer : IPrinter
{
    void print(std::vector<Document*> docs) override;
};

struct IMachine : IPrinter, IScanner
{
    
};

struct Machine : IMachine
{
    IPrinter& printer;
    IScanner& scanner;

    Machine(IPrinter& printer, IScanner& scanner)
        : printer{printer},
          scanner{scanner}
    {

    }

    void print(std::vector<Document*> docs) override {
        printer.print(docs);
    }

    void scanner(std::vector<Document*> docs) override {
        scanner.scan(docs);
    }
};

int main(){
    
    std::cout << "Hello World" << std::endl;

    return 0;
}


