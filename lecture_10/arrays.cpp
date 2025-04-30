#include <iostream>

using namespace std;

int main() {

    int* mp = new int[5]; 
    
    cout << mp << " " << ++mp;

    // *(mp + i) == mp [i]

    delete []mp; // delete all pointers

    

    return 0;
}