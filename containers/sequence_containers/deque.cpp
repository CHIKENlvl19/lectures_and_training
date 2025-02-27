#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> deque_1; // пустая очередь
    deque<int> deque_2(3, 10); // очередь с 3 элементами, каждый из которых равен 10
    deque<int> deque_3 = {1, 2, 3};

    deque_2.push_front(5);
    for(int n : deque_2) cout << n << " ";
    cout << endl;

    deque_2.push_back(5);
    for(int n : deque_2) cout << n << " ";
    cout << endl;


    deque_2.pop_front();
    for(int n : deque_2) cout << n << " ";
    cout << endl;

    deque_2.pop_back();
    for(int n : deque_2) cout << n << " ";
    cout << endl;

    cout << deque_2.size() << endl;
    cout << deque_2.front() << endl;
    cout << deque_2.back() << endl;
    cout << deque_2[1] << endl;
    cout << deque_2.empty() << endl;

    return 0;
}