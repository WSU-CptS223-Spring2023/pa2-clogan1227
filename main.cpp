#include "TestVectorMyJosephus.hpp"

/*
-The processor of the machine definitely does matter. If I were to run this program on a computer from 30 years ago it 
would be a lot slower, and if I ran it on a computer from 30 years in the future it would run faster. Each machine
has different capabilities.
-The list implementation does best when deleting values from the list, because it is a simple pointer operation, while
with a vector you need to shift each element of the array. You can see this in the results I gathered, where the average
elimination time of the vector implementation took much longer than the list implementation. The vector implementation,
however, does best when needing to access any of the data within. You can't really see this in the data, but it is easier
to access elements in an array/vector than a linked list. In this assignment it seems that the list was consistently
faster than the array, at least according to my results.
-The parameter N is what increases/decreases the runtime of the program. As seen in my results, as the N value grew, 
so did the total runtime. On the other hand, the M value didn't affect the runtime much at all when changed.
*/

int main(){
    
    // UNCOMMENT THIS BLOCK TO TEST RANDOM M AND N VALUES ON LIST AND VECTOR IMPLEMENTATIONS
    // srand(time(NULL));
    // int n = (rand() % 1024 + 1);
    // int m = (rand() % n);
    // ListMyJosephus l(m, n);
    // VectorMyJosephus v(m, n);
    // LIST IMPLEMENTATION
    // loadDestinations(l);
    // runSimulation(l);
    // VECTOR IMPLEMENTATION
    // loadDestinations(v);
    // runSimulation(v);

    return 0;
}