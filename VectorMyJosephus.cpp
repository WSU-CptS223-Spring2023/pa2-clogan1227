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
Destination VectorMyJosephus::eliminateDestination(){
    
}
void VectorMyJosephus::printAllDestinations(){
    for (auto& d : vector){
        d.printDestinationName();
    }
}