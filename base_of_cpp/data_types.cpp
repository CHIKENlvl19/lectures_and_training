#include <iostream>

using namespace std;

int a = 1; // ���������� ����������

int main()
{
    int b = 2; // ��������� ����������

    {
        int c = 3;

        cout << a << " " << b << " " << c << endl; // ���������
    }

    //cout << c << endl; // ��� ������� �� ����� ��������������, �.�. ���������� ����� �� ����������

    char c = '1'; // ������, �� �����, 1 ����, ���������� �������� 49 - ��������� �� ������� ASCII
    bool bool_value = true; // ���������� ����������, �� �����, 1 ����, ���������� �������� 1 (true) ��� 0 (false)
    int i = 42; // ����� �����, 4 �����
    short int si = 17; // �������� �����, 2 �����
    long int li = 12321321312; // ������� �����, ��� �������, 8 ����
    long long int lli = 12321321312; // ��� ����� ������� �����, ���� ��� ������� 8 ����
    float f = 2.71878; // ������������ ����� � ��������� ������, 4 �����
    double d = 3.141592; // ������������ � ��������� ������ ��������, 8 ����
    long double ld = 1e15; // ��� ����� ������� ������������ � ��������� ������, 16 ����

    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;

    return 0;
}