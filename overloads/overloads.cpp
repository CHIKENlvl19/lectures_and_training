#include <iostream>
#include <sstream>
#include <tuple>
#include <vector>
#include <iomanip>

using namespace std;

tuple<int, int, int> ReadFromSS (istream& is) {
    int day;
    int month;
    int year;

    is >> day;
    is.ignore(1);
    is >> month;
    is.ignore(1);
    is >> year;

    return {day, month, year};
}

void DisplayTuple(ostream& os, tuple<int, int, int> data) {
    os << setfill('0');
    os << setw(2) << get<0>(data) << " ";
    os << setw(2) << get<1>(data) << " ";
    os << setw(4) << get<2>(data);
}

void operator << (ostream& os, tuple<int, int, int> data) {
    os << setfill('0');
    os << setw(2) << get<0>(data) << " ";
    os << setw(2) << get<1>(data) << " ";
    os << setw(4) << get<2>(data);
}

istream& operator >> (istream& is, tuple<int, int, int>& data) {
    int day;
    int month;
    int year;

    is >> day;
    is.ignore(1);
    is >> month;
    is.ignore(1);
    is >> year;

    return is;
}

ostream& operator << (ostream& os, vector<int> v) {
    for (auto item : v){
        os << item << " ";
    }

    return os;
}

int main() {

    stringstream ss("16 04 2025");
    tuple<int, int, int> data = ReadFromSS(ss);
    DisplayTuple(cout, data);
    cout << endl;

    cout << data;
    cout << endl;

    vector<int> ints = {1, 2, 3, 4, 5};
    cout << ints;

}