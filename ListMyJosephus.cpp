#include "ListMyJosephus.hpp"

ListMyJosephus::ListMyJosephus(int em, int en){
    m = em;
    n = en;
}
ListMyJosephus::~ListMyJosephus(){}

void ListMyJosephus::clear(){
    list.clear();
}
int ListMyJosephus::currentSize(){
    return list.size();
}
bool ListMyJosephus::isEmpty(){
    return list.empty();
}
Destination ListMyJosephus::eliminateDestination(){
    
}
void ListMyJosephus::printAllDestinations(){
    for (auto& d : list){
        d.printDestinationName();
    }
}
void ListMyJosephus::pushBack(Destination d){
    list.push_back(d);
}
