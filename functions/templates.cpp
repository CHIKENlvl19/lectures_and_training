#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

template <typename T, typename D>
void f(T a, D& r, const T& cr) {
    ++a;
    ++r;
    int x = cr;
}

