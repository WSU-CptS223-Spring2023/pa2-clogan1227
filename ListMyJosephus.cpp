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
    std::advance(it, i);
    Destination rm(*it);
    list.erase(it);

    return rm;
}
void ListMyJosephus::printAllDestinations(){
    cout << "\{";
    for (auto& d : list){
        d.printPosition();
        cout << ". ";
        d.printDestinationName();
        cout << ", ";
    }
    cout << "\}";
}
void ListMyJosephus::pushBack(Destination d){
    list.push_back(d);
}
int ListMyJosephus::getN(){
    return n;
}
int ListMyJosephus::getM(){
    return m;
}
void ListMyJosephus::setN(int en){
    n=en;
}
void ListMyJosephus::setM(int em){
    m=em;
}