#include<list>
#include "destination.hpp"

class ListMyJosephus{
    public:
    ListMyJosephus(int em, int en);
    ~ListMyJosephus();

    void clear();
    int currentSize();
    bool isEmpty();
    Destination eliminateDestination(int i);
    void printAllDestinations();

    void setN(int en);
    void setM(int em);
    int getN();
    int getM();

    void pushBack(Destination d);

    private:
    int m;
    int n;
    std::list<Destination> list;
};