#include <iostream>
#include <map>

using namespace std;

int operator + (const map<int, int>& map1, const map<int, int>& map2){
    int result = 0;

    for(auto n : map1){
        result += n.first;
        result += n.second;
    }

    for(auto n : map2){
        result += n.first;
        result += n.second;
    }    

    return result;
}

int main() {

    map<int, int> map1 = { {1, 10}, {2, 20}, {3, 30} };
    map<int, int> map2 = { {4, 40}, {5, 50}, {6, 60} };

    cout << map1 + map2;

    return 0;
}