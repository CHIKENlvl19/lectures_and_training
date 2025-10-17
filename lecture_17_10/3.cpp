#include <iostream>

using namespace std;

class Time {
 public:
    int hour;
    int min;
    int sec;

 public:
    Time() {};

    Time operator+(const Time& rhs){
        Time result;
        result.sec = sec + rhs.sec;
        result.min = min + rhs.min + result.sec / 60;
        result.sec = result.sec % 60;
        result.hour = hour + rhs.hour + result.min / 60;
        result.min = result.min % 60;
    
        return result;
    }

    friend ostream& operator<<(ostream& os, const Time& tm);
};

ostream& operator<< (ostream& os, const Time& tm) { // В операторах перегрузки, если результат считается просто, то просто пихать в ретурн
    os << tm.hour << " " << tm.min << " " << tm.sec;

    return os;
}

istream& operator>> (istream& is, Time& tm) {
    
    is >> tm.hour;
    is >> tm.min;
    is >> tm.sec;

    return is;
}

int main() {

    Time time{12, 00, 00};
    Time LostTime{0, 00, 10};

    //Time lectureTime = time + LostTime;
    //cout << lectureTime;
    cout << endl;

    Time forDel(00, 59, 59);
    //cout << lectureTime + forDel << endl;

    Time time2;
    cin >> time2;
    cout << time2;

    return 0;
}