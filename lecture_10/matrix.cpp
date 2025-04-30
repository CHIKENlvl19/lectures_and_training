#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {

    int n = 5;

    // 1. указатель на указатель
    int** a;

    // 2. цикл для выделения памяти под каждую строку массива, для этого
    // сформировать масиив указателей
    a = new int*[n];

    // 3. в цикле необходимо выделить память под каждую строчку массива
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n]; // столбцы
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand();
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(15) << &a[i][j] << " ";
        }

        cout << endl;
    }

    // удалеине двумерного масисва идет в обратном порядке

    for(int i = 0; i < n; i++)
    {
        delete []a[i];
    }
    delete []a;

    // вывод после удаления
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(15) << a[i][j] << " ";
        }
    }*/

    return 0;
}