#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//using T = vector<string>::iterator ;

template<typename T>
void PrintVGT(T st, T fnsh) {
    for (auto it = st; it!= fnsh; it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main() {

    vector<string> vegetables = {"apple", "pineapple", "banana", "watermelon", "kishmish"};

    cout << count(vegetables.begin(), vegetables.end(), "apple") << endl;

    auto i = find_if(vegetables.begin(), vegetables.end(), [] (string s) {
        //return s[0] = 'a';
        return s == "cucumber"; 
    });

    /*if (i == vegetables.end())
    {
        cout << "cucumber is not in vegs";
    }

    cout << *i;
    */

    /*auto q = vegetables.begin();
    q++;
    q++;
    */

    for (auto q = vegetables.begin(); q != vegetables.end() ; q++)
    {
        cout << *q << " ";
    }
    cout << endl;

    //cout << *q;

    PrintVGT(vegetables.begin(), vegetables.end());

    //PrintVGT(vegetables.begin() + 4, vegetables.end() + 5);

    // [begin, end) - концепция полуинтервалов

    PrintVGT(vegetables[0].begin(), vegetables[0].end());
    

    string s = "cucucmber";
    PrintVGT(s.begin(), s.end());


    return 0;
}
