#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list_1; // ������ ������
    list<int> list_2(3, 42); // 42 42 42
    list<int> list_3 = {1, 2, 3};

    // ������� - ��������

    auto it = list_3.begin(); 

    list_3.insert(it, 0); // ����� - �������� it �� ������������, �.�. ��������� �� 1 � ����� ������
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.erase(it); // ������� �������, �� ������� ��������� �������� it 
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.push_back(4);
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.push_front(-1);
    for (int n : list_3) cout << n << " ";
    cout << endl;

    // ����������� ������

    list_3.remove(0); // ������� ���� �� ������
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.sort(); // ��������� ������
    for (int n : list_3) cout << n << " ";
    cout << endl;

    list_3.reverse(); // ������ ������
    for (int n : list_3) cout << n << " ";
    cout << endl;
    

    return 0;
}