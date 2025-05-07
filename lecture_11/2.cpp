#include <iostream>

using namespace std;

int mark(int lr, int pr, int rgr, int kol) {
    int res = (0.4 * lr + 0.3 * pr + 0.3 * rgr ) * kol;

    if (res < 50) {
        throw "Wellcome in September.. maybe....";
    }

    return res;
}

int main() {

    int lr = 100; int pr = 100; int rgr = 100; int kol = 1;

    try{
        cout << mark(lr, pr, rgr, kol);
    } catch (const char* ex) {
        cerr << ex;
    }

    return 0;
}