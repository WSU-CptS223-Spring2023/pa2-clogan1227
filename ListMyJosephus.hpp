#include<list>
#include "destination.hpp"

class ListMyJosephus{
    public:
    ListMyJosephus(int em, int en);
    ~ListMyJosephus();

    void clear();
    int currentSize();
    bool isEmpty();
    Destination eliminateDestination();
    void printAllDestinations();

    private:
    int m;
    int n;
    std::list<Destination> list;
};