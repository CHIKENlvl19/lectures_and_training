#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, float, bool> t(1, 1.1, true); // ������ �� ���� ���������
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl; // ����� ��������� ������� �� �������
    
    printf("%s", get<2>(t) ? "true" : "false"); // ����� �������� ����������� ��������
    cout << endl;

    cout << (get<2>(t) ? "true" : "false"); // ����� � ���

    return 0;
}