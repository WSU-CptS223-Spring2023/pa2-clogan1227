#include<fstream>
#include<time.h>
#include<string>

#include "TestListMyJosephus.hpp"

using std::ifstream;
using std::string;

void loadDestinations(ListMyJosephus& list){ //FIGURE OUT M AND N VALUES. MAKE GET FUNCTIONS FOR THEM?
    ifstream infile;
    infile.open("destinations.csv", std::ios::in);

    srand(time(NULL));
    int line = (rand() % 25 + 1);
    int n = (rand() % 1024 + 1);
    int m = (rand() % n);
    string temp;


    for (int i=0; i<(line-1); i++){
        getline(infile, temp); //traverse file until desired line is reached
    }
    for (int i=0; i<n; i++){
        getline(infile, temp, ';');
        Destination* d = new Destination(i, temp);
        list.pushBack(*d);
    }

    infile.close();
}