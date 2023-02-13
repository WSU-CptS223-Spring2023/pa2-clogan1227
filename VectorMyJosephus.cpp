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
    vector.erase(vector.begin() + i); //remove the object in the ith position

    return rm;
}
void VectorMyJosephus::printAllDestinations(){
    cout << "\{";
    for (auto& d : vector){
        d.printPosition();
        cout << ". ";
        d.printDestinationName();
        cout << ", ";
    }
    cout << "\}";
}
void VectorMyJosephus::pushBack(Destination d){
    vector.push_back(d);
}
int VectorMyJosephus::getN(){
    return n;
}
int VectorMyJosephus::getM(){
    return m;
}