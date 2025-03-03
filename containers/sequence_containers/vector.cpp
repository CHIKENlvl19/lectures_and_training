#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec_1 = {5, 10}; // 5 10
    vector<int> vec_2(5, 42); // 42 42 42 42 42
    vector<int> vec_3 {vec_2.begin(), vec_2.end()}; // ����������� ��������

    cout << vec_1[0] << " " << vec_1[1] << endl; // ������ � ���������
    cout << vec_3.size() << endl; // ������ ������� - ������� ���������� ���������
    cout << vec_1.capacity() << endl; // ������ ����������� ������

    vec_2.push_back(69);
    for (int n : vec_2){
        cout << n << " ";
    }

    cout << endl;

    vec_2.pop_back();
    for (int n : vec_2){
        cout << n << " ";
    }

    cout << endl;

    vec_2.insert( vec_2.begin() + 2, 99);
    for (int n : vec_2){
        cout << n << " ";
    }

    cout << endl;

    vec_2.erase( vec_2.begin() + 2 );
    for (int n : vec_2){
        cout << n << " ";
    }

    cout << endl;

    vec_2.clear();
    for (int n : vec_2){
        cout << n << " ";
    }

    cout << endl;

    vec_2.reserve(100); // �������� ������ ��� 100 ���������
    cout << vec_2.size() << endl;    

    vec_1.shrink_to_fit(); // ��������� ������ ������� �� ������������ ���������� ��������� (capacity �� size)
    cout << vec_1.size() << endl;
    
    vec_2.resize(50);
    cout << vec_2.size();
    

    return 0;
}