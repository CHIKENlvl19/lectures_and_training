#include <iostream>

using namespace std;

struct Hour {
    int hour;

    explicit Hour(int h) : hour(h) {}; // явный конструктор
};

struct Min {
    int min;

    explicit Min(int m) : min(m) {};
};

struct Sec {
    int sec;

    explicit Sec(int s) : sec(s) {};
};

class Time {
 public:
    int hour;
    int min;
    int sec;

    Time(Hour h, Min m, Sec s) 
        : hour(h.hour), min(m.min), sec(s.sec)  {

    }
};

// Если возникает необходимость использовать конструктор явного типа, используется служебное слово explicit

int main() {

    Time time{Hour(1), Min(1), Sec(23)};

    // Time time{1, 1, 23}; - так не выйдет
    
    return 0;
}