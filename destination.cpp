#include "destination.hpp"

Destination::Destination(int pos, string nm){
    position = pos;
    name = nm;
}
Destination::~Destination(){}

void Destination::printPosition(){
    cout << position;
}
void Destination::printDestinationName(){
    cout << name;
}