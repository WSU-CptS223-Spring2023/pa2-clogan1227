#include<fstream>
#include<time.h>
#include<string>

#include "TestListMyJosephus.hpp"

using std::ifstream;
using std::string;

void loadDestinations(ListMyJosephus& list){ 
    ifstream infile;
    infile.open("destinations.csv", std::ios::in);

    srand(time(NULL));
    int line = (rand() % 25 + 1);
    string temp;


    for (int i=0; i<(line-1); i++){
        getline(infile, temp); //traverse file until desired line is reached
    }
    for (int i=0; i<list.getN(); i++){
        getline(infile, temp, ';');
        Destination* d = new Destination(i, temp);
        list.pushBack(*d);
    }

    infile.close();
}

void runSimulation(ListMyJosephus& list){
    cout << "\n---------------ListMyJosephus---------------\nN- " << list.getN() << "  M- " << list.getM() << "\nOriginal Destinations: " << endl;
    list.printAllDestinations();

    int currentIndex = 0;

    //clock_t start = clock(), end;

    for (int i=1; list.currentSize() != 1; i++){
        currentIndex = currentIndex + list.getM(); // iterate by m, use mod to make sure index doesn't go above n
        currentIndex = currentIndex % list.currentSize();
        list.eliminateDestination(currentIndex);
        currentIndex -= 1;
        cout << "\nRound #" << i << " --- Remaining Destinations: " << endl;
        list.printAllDestinations();
    }

    // end = clock();
    // cout << "N = " << list.getN() << ", M = "<< list.getM() <<"\nTotal CPU time: " << ((double)(end - start)/(CLOCKS_PER_SEC))*1000 << " milliseconds\nAverage Elimination Time: " << ((double)(end - start)/(CLOCKS_PER_SEC*(list.getN()-1)))*1000000 << " microseconds" << endl;


    cout << "\n--------------------\nChosen Destination: ";
    list.printAllDestinations();
    cout << "     N- " << list.getN() << "  M- " << list.getM();
    cout << "\n--------------------" << endl;
}
