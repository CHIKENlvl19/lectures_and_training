// Задача: распарсить время из строки в структуру

#include <iostream>
#include <sstream>

using namespace std;

struct Time {

    int hour;
    int min;
    int sec;

};

void LastCheck(stringstream& sss) {
    if(sss.peek() != ':') 
    {
        stringstream serr;
        serr << "Not clever YOU!!! Press ':', you pressed " << char(sss.peek());

        throw runtime_error(serr.str());
    }

}

Time FromStringToTime(const string& s) {
    stringstream ss (s);
    Time time;

    ss >> time.hour;
    LastCheck(ss);
    ss.ignore(1);

    ss >> time.min;
    LastCheck(ss);
    ss.ignore(1);

    ss >> time.sec;

    return time;
}

int main() {

    string s = "14/54:15";

    /*try{
        Time time = FromStringToTime(s);
        cout << time.hour << " " << time.min;
    } catch (const char* s){
        cerr << s;
    }*/
    

    try{
        Time time = FromStringToTime(s);
        cout << time.hour << " " << time.min;
    } catch (exception& s){
        cerr << s.what();
    }
}