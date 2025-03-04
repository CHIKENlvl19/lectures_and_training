#include <iostream>
#include <limits>
#include <cstdint>

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

    cout << "char size in bytes: " << sizeof(char) << endl;
    cout << "bool size in bytes: " << sizeof(bool) << endl;
    cout << endl;

    // ��������� ������� ������� �������� ����� ����������

    cout << "int size in bytes: " << sizeof(int) << endl;
    cout << "int minimum value: " << numeric_limits<int>::min() << endl
                                  << "int maximum value: " << numeric_limits<int>::max() << endl << endl;
    

    cout << "short int size in bytes: " << sizeof(short int) << endl;
    cout << "short int minimum value: " << numeric_limits<short>::min() << endl
                                        << "short int maximum value: " << numeric_limits<short>::max() << endl << endl;

    cout << "long int size in bytes: " << sizeof(long int) << endl;
    cout << "long int minimum value: " << numeric_limits<long>::min() << endl
                                       << "long int maximum value: " << numeric_limits<long>::max() << endl << endl;

    cout << "long long int size in bytes: " << sizeof(long long int) << endl;
    cout << "long long int minimum value: " << numeric_limits<long long>::min() << endl
                                            << "long long int maximum value: " << numeric_limits<long long>::max() << endl << endl;

    cout << "float size in bytes: " << sizeof(float) << endl;
    cout << "float minimum value: " << numeric_limits<float>::min() << endl
                                    << "float maximum value: " << numeric_limits<float>::max() << endl << endl;
    
    cout << "double size in bytes: " << sizeof(double) << endl;
    cout << "double minimum value: " << numeric_limits<double>::min() << endl
                                     << "double maximum value: " << numeric_limits<double>::max() << endl << endl;

    cout << "long double size in bytes: " << sizeof(long double) << endl;
    cout << "long double minimum value: " << numeric_limits<long double>::min() << endl
                                          << "long double maximum value: " << numeric_limits<long double>::max() << endl << endl;
    
    cout << "int8_t size in bytes: " << sizeof(int8_t) << endl;
    cout << "int8_t minimum value: " << numeric_limits<int8_t>::min() << endl
                                     << "int8_t maximum value: " << numeric_limits<int8_t>::max() << endl << endl;

    cout << "uint8_t size in bytes: " << sizeof(uint8_t) << endl;
    cout << "uint8_t minimum value: " << numeric_limits<uint8_t>::min() << endl
                                      << "uint8_t maximum value: " << numeric_limits<uint8_t>::max() << endl << endl;

    cout << "int16_t size in bytes: " << sizeof(int16_t) << endl;
    cout << "int16_t minimum value: " << numeric_limits<int16_t>::min() << endl
                                      << "int16_t maximum value: " << numeric_limits<int16_t>::max() << endl << endl;
    
    cout << "uint16_t size in bytes: " << sizeof(uint16_t) << endl;
    cout << "uint16_t minimum value: " << numeric_limits<uint16_t>::min() << endl
                                      << "uint16_t maximum value: " << numeric_limits<uint16_t>::max() << endl << endl;
    
    cout << "int32_t size in bytes: " << sizeof(int32_t) << endl;
    cout << "int32_t minimum value: " << numeric_limits<int32_t>::min() << endl
                                      << "int32_t maximum value: " << numeric_limits<int32_t>::max() << endl << endl;

    cout << "uint32_t size in bytes: " << sizeof(uint32_t) << endl;
    cout << "uint32_t minimum value: " << numeric_limits<uint32_t>::min() << endl
                                      << "uint32_t maximum value: " << numeric_limits<uint16_t>::max() << endl << endl;

    cout << "int64_t size in bytes: " << sizeof(int64_t) << endl;
    cout << "int64_t minimum value: " << numeric_limits<int64_t>::min() << endl
                                      << "int64_t maximum value: " << numeric_limits<int64_t>::max() << endl << endl;

    cout << "uint64_t size in bytes: " << sizeof(uint64_t) << endl;
    cout << "uint64_t minimum value: " << numeric_limits<uint64_t>::min() << endl
                                      << "uint64_t maximum value: " << numeric_limits<uint64_t>::max() << endl << endl;
    return 0;
}