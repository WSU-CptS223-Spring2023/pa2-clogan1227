#include<vector>
#include "ListMyJosephus.hpp"

class VectorMyJosephus{
    public:
    VectorMyJosephus(int em, int en);
    ~VectorMyJosephus();

    void clear();
    int currentSize();
    bool isEmpty();
    Destination eliminateDestination();
    void printAllDestinations();

    private:
    int m;
    int n;
    std::vector<Destination> vector;
};