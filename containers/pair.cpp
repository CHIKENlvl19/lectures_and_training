#include <iostream>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << endl; // ������� ������ ���� ����
    cout << p.second << endl; // ������� ������ ���� ����

    p = make_pair(3, 4); // ������� ���� � ������� make_pair
    cout << p.first << endl;
    cout << p.second << endl; 

    pair<int, int> a, b;
    a = {6, 7};
    b = a;
    cout << b.first << " " << b.second << endl;

    return 0;
}