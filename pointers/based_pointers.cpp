#include <iostream>

using namespace std;

int main() {

    int* x = new int(5);
    cout << "Value of x: " << *x << endl;
    cout << x << endl;

    string* s = new string;
    *s = "Hello, World!";
    cout << "Value of s: " << *s << endl;

    return 0;
}