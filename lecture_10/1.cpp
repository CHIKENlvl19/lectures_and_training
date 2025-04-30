#include <iostream>

using namespace std;

void ff(int x) {
    cout << x++;
}
int main() {

    int* x = new int(66666);
    int* y = new int;

    //cout << x << " ";
    //x++;
    //cout <<  *x; // 0

    delete x;
    delete y; // clear pointer



    return 0;
}