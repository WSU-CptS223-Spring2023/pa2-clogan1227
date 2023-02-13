#include<fstream>
#include<time.h>
#include<string>

#include "TestVectorMyJosephus.hpp"

using std::ifstream;
using std::string;

void loadDestinations(VectorMyJosephus& vector){ 
    ifstream infile;
    infile.open("destinations.csv", std::ios::in);

    srand(time(NULL));
    int line = (rand() % 25 + 1);
    string temp;


    for (int i=0; i<(line-1); i++){
        getline(infile, temp); //traverse file until desired line is reached
    }
    for (int i=0; i<vector.getN(); i++){
        getline(infile, temp, ';');
        Destination* d = new Destination(i, temp);
        vector.pushBack(*d);
    }

    infile.close();
}
void runSimulation(VectorMyJosephus& vector){
    cout << "\n---------------VectorMyJosephus---------------\nN- " << vector.getN() << "  M- " << vector.getM() << "\nOriginal Destinations: " << endl;
    vector.printAllDestinations();

    int currentIndex = 0;

    //clock_t start = clock(), end;

    for (int i=1; vector.currentSize() != 1; i++){
        currentIndex = currentIndex + vector.getM(); // iterate by m, use mod to make sure index doesn't go above n
        currentIndex = currentIndex % vector.currentSize();
        vector.eliminateDestination(currentIndex);
        currentIndex -= 1;
        cout << "\nRound #" << i << " --- Remaining Destinations:" << endl;
        vector.printAllDestinations();
    }

    // end = clock();
    // cout << "N = " << vector.getN() << ", M = "<< vector.getM() <<"\nTotal CPU time: " << ((double)(end - start)/(CLOCKS_PER_SEC))*1000 << " milliseconds\nAverage Elimination Time: " << ((double)(end - start)/(CLOCKS_PER_SEC*(vector.getN()-1)))*1000000 << " microseconds" << endl;


    cout << "\n--------------------\nChosen Destination: ";
    vector.printAllDestinations();
    cout << "     N- " << vector.getN() << "  M- " << vector.getM();
    cout << "\n--------------------" << endl;
}
