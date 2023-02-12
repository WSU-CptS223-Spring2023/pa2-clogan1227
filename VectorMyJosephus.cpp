#include "VectorMyJosephus.hpp"

VectorMyJosephus::VectorMyJosephus(int em, int en){
    m = em;
    n = en;
}
VectorMyJosephus::~VectorMyJosephus(){}

void VectorMyJosephus::clear(){
    vector.clear();
}
int VectorMyJosephus::currentSize(){
    return vector.size();
}
bool VectorMyJosephus::isEmpty(){
    return vector.empty();
}
Destination VectorMyJosephus::eliminateDestination(int i){
    Destination rm(vector[i]);
    vector.erase(vector.begin() + i - 1); //remove the object in the ith position

    return rm;
}
void VectorMyJosephus::printAllDestinations(){
    for (auto& d : vector){
        d.printDestinationName();
    }
}
void VectorMyJosephus::pushBack(Destination d){
    vector.push_back(d);
}
