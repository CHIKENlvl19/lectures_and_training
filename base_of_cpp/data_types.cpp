#include <iostream>

using namespace std;

int a = 1; // глобальная переменная

int main()
{
    int b = 2; // локальная переменная

    {
        int c = 3;

        cout << a << " " << b << " " << c << endl; // корректно
    }

    //cout << c << endl; // эта строчка не будет скомпилирована, т.к. переменная здесь не определена

    char c = '1'; // символ, по факту, 1 байт, содержащий значение 49 - кодировка по таблице ASCII
    bool bool_value = true; // логическая переменная, по факту, 1 байт, содержащая значение 1 (true) или 0 (false)
    int i = 42; // целое число, 4 байта
    short int si = 17; // короткое целое, 2 байта
    long int li = 12321321312; // длинное целое, как правило, 8 байт
    long long int lli = 12321321312; // еще более длинное целое, тоже как правило 8 байт
    float f = 2.71878; // вещественное число с плавающей точкой, 4 байта
    double d = 3.141592; // вещественное с плавающей точкой побольше, 8 байт
    long double ld = 1e15; // еще более длинное вещественное с плавающей точкой, 16 байт

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