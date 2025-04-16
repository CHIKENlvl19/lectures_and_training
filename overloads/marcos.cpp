#include <iostream>
#include <sstream>

#define MIN(x, y)               (x) < (y) ? (x) : (y)
#define CUBE(x)                 ( (x)*(x)*(x) )
#define MCRS_FILE_AND_LINES     __FILE__ << ":" << __LINE__

#define MCRS(x, y, m) {                 \
    ostringstream ss;                   \
    os << __FILE__ << " " __LINE__ ;    \
    function(os);                       \
}

using namespace std;

int main() {
    int x = 5, y = 2;

    int z = MIN(x, y);
    cout << "The minimum of " << x << " and " << y << " is " << z;

    int c = CUBE(x);
    cout << "\n" << x << " cubed is " << c;

    cout << "\n" << MCRS_FILE_AND_LINES;
}