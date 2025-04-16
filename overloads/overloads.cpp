#include <iostream>
#include <sstream>
#include <tuple>
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

void DisplayTuple(ostream& os, tuple<int, int, int> data){
    os << setfill('0');
    os << setw(2) << get<0>(data) << " ";
    os << setw(2) << get<1>(data) << " ";
    os << setw(4) << get<2>(data);
}

int main(){

    stringstream ss("16 04 2025");
    tuple<int, int, int> data = ReadFromSS(ss);
    DisplayTuple(cout, data);


    //return 0;
}