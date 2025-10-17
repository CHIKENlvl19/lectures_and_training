#include <iostream>
#include <cstring>

using namespace std;

class String {

 public:
    char* str;
    size_t size;

    String(size_t n, char symbol)
        : str(new char[n]), size(n) {

        memset(str, symbol, n);
    };

    String(const String& s) // Делегирующий конструктор
        : String(s.size, '\0') {
        
        memset(str, *s.str, size);
    };

    String(initializer_list<char> list) 
        : str(new char[list.size()]), size(list.size()) {
        
        int i = 0;
        for(auto item : list)
        {
            str[i] = item;
            i++;
        }
    }

    ~String() {
        delete str;
    }
};

int main() {

    String s(20, 'A');
    String s2(s);
    String s3 = {'a', 'b', 'c'};

    return 0;
}