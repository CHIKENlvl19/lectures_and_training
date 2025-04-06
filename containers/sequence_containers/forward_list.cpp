#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fwd_list1; // пустой
    forward_list<int> fwd_list2 = {1, 2, 3};
    for (int n : fwd_list2) cout << n << " ";
    cout << endl;


    fwd_list2.push_front(0); // вставка в начало : 0 1 2 3
    for (int n : fwd_list2) cout << n << " ";
    cout << endl;

    fwd_list2.insert_after( fwd_list2.begin(), 42 );
    for (int n : fwd_list2) cout << n << " ";
    cout << endl; 

    fwd_list2.erase_after( fwd_list2.begin() );
    for (int n : fwd_list2) cout << n << " ";
    cout << endl;

    fwd_list2.pop_front();
    for (int n : fwd_list2) cout << n << " ";
    cout << endl;

    return 0;
}