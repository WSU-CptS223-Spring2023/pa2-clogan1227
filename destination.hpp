#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::endl;

class Destination{
    public:
    Destination();
    Destination(int pos, string nm);
    Destination(const Destination& copy);
    ~Destination();

    void printPosition();
    void printDestinationName();

    private:
    int position;
    string name;
};