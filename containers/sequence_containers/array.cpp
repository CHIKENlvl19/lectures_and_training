#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 3> arr_1 = {1, 2, 3};
    array<int, 2> arr_2; // ������ ����� �������� ������
    array arr_3 = {6, 7, 8, 9, 10}; // ������������� ��������� �����

    cout << arr_1[0] << endl; // ����� ��� �������� ������
    cout << arr_1.at(1) << endl; // ����� � ��������� ������
    cout << arr_1.front() << endl; // ����� ������� ��������
    cout << arr_1.back() << endl; // ����� ���������� ��������

    for(int i = 0; i < static_cast<int>( arr_3.size() ); ++i){ // ����� ���� ���������
        cout << arr_3[i] << " ";
    }

    cout << endl;

    for (auto n : arr_3){ // ����� ���� ���������, �� ����������
        cout << n << " ";
    }

    cout << endl;

    arr_2.fill(5); // ���������� ������� ��������� 5
    for (auto n : arr_2){
        cout << n << " ";
    }

    cout << endl;

    array<int, 2> arr_4 = {6, 6};
    arr_4.swap(arr_2); // ������ ������� ������� 4 � 2 (�������� ������� 2 ���������� � ������ 4)
    for (auto n : arr_4){
        cout << n << " ";
    }

    

    return 0;
}