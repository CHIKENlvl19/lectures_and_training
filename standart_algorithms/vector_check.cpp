#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream& operator << (ostream& out, vector<int> v){
    for(auto n : v){
        out << n << " ";
    }

    return out;
} 

bool ifOverTwenty(int n) { return n > 20; }

bool ifBelowTwenty(int n) { return n < 20; }

int main() {

    vector<int> SiberianTemp = {+20, +10, -3, 0, +6, +30};

    sort(SiberianTemp.begin(), SiberianTemp.end());
    cout << SiberianTemp << endl;

    cout << count(SiberianTemp.begin(), SiberianTemp.end(), 20) << endl;

    cout << count_if(SiberianTemp.begin(), SiberianTemp.end(), ifOverTwenty) << endl;

    cout << count_if(SiberianTemp.begin(), SiberianTemp.end(), ifBelowTwenty) << endl;

    cout << count_if(SiberianTemp.begin(), SiberianTemp.end(), [ ] (int n ){ return n > 0; }) << endl;


    sort(SiberianTemp.begin(), SiberianTemp.end(), [ ] (int x, int y) { return abs(x) < abs(y); });
    cout << SiberianTemp;

    return 0;
}