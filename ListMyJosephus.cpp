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
Destination ListMyJosephus::eliminateDestination(int i){
    std::list<Destination>::iterator it = list.begin();
    std::advance(it, i-1);
    Destination rm(*it);
    list.erase(it);

    return rm;
}
void ListMyJosephus::printAllDestinations(){
    for (auto& d : list){
        d.printDestinationName();
    }
}
void ListMyJosephus::pushBack(Destination d){
    list.push_back(d);
}
