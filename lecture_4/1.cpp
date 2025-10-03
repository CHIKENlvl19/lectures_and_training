#include <iostream>

using namespace std;

struct Tbase {
    int key;
    int info;
};

int search(Tbase* tb, int size, int key) {

    for(int i = 0; i < size; i++)
    {
        if(tb[i].key == key)
        {
            return i;
        }
    }

    return -1;
}

int better_search(Tbase* tb, int size, int key) { // количесво действий снижено

    tb[size].key = key;

    int i = 0;
    for(int i = 0; tb[i].key != key ; i++)
    {
        
    }
    return i;

}

int binarySearch(Tbase* tb, int left, int right, int key) {

    if(right > left)
    {
        int mid = (right - left) / 2;
        if(tb[mid].key == key)
        {
            return mid;
        }

        if(tb[mid].key > key)
        {
            return binarySearch(tb, left, mid - 1, key);
        }

        if(tb[mid].key < key)
        {
            return binarySearch(tb, mid + 1, right, key);
        }
    }

    return -1;
}

int binarySearch2(Tbase* tb, int left, int right, int key) {

    while(left < right)
    {
        int mid = (right - left) / 2;

        if(tb[mid].key == key)
        {
            return mid;
        }

        if(tb[mid].key > key)
        {
            right = mid - 1;
        }

        if(tb[mid].key < key)
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {

    Tbase* tb = new Tbase[3] { (0,0), (1,1), (2,2) };

    cout << search(tb, 3, 1) << endl;
    cout << better_search(tb, 3, 1) << endl;
    cout << binarySearch(tb, 0, 2, 1) << endl;
    cout << binarySearch2(tb, 0, 2, 1) << endl;

    return 0;
}