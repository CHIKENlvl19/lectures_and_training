#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> map_1 = { {1, "Stas"}, {2, "Petr"}, {3, "Sergey"} };

    map_1.insert( make_pair(4, "Ivan") ); // ������� �������� 
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl; // ������� ����� map
    cout << endl;

    map_1.insert( {5, "Zhopa"} );
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl;
    cout << endl;

    map_1[6] = "Kto-to"; // ������� �������� ����� operator[]
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl;
    cout << endl;

    map_1.emplace( 7, "XBATNT" );
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl;
    cout << endl;

    cout << map_1[8] << endl; // ������� ���� 8 � �������� �������� " ", ���� �������� ���
    cout << map_1.at(8) << endl; // �������� ����������, ���� ����� ���
    
    cout << map_1.count(1) << endl; // �������� �� ����������� ����� -> 1 ��� 0 ��������������

    map_1.erase(7); // �������� �� �����
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl;
    cout << endl;

    map_1.erase( map_1.begin(), map_1.find(4) ); // �������� ��������� �� ������ � �� ���������� �����
    for(auto n : map_1) cout << "[" << n .first << " " << n.second << "]" << endl;
    cout << endl;

    map<string, int> map_2 = { {"banana", 10}, {"apple", 20}, {"penis", 30} };

    return 0;
}