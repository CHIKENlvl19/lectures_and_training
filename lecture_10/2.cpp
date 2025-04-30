#include <iostream>

using namespace std;

void ff() {
    int c = 574;
    int d = 667;
}
int main() {

    int x = 6666;

    for(int j = 0; j <= 50; j++)
    {
        ff();
        int i = *(&x - j); // up the stack
        cout << j << " " << i << endl;
    }

    //ff();

    //int i = *(&x - 1); // up the stack
    //cout << i;



    return 0;
}