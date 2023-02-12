#include "destination.hpp"

Destination::Destination(){}
Destination::Destination(int pos, string nm){
    position = pos;
    name = nm;
}
Destination::Destination(const Destination& copy){
    if (this != &copy){
        this->position = copy.position;
        this->name = copy.name;
    }
}
Destination::~Destination(){}

void Destination::printPosition(){
    cout << position << " ";
}
void Destination::printDestinationName(){
    cout << name << " ";
}