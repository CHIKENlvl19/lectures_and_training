#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

enum class Gender : uint8_t {Female, Male};

struct Student {
    string surname;
    uint64_t dbl;
    Gender gender = Gender::Male;
};

ostream& operator << (ostream& os, const Student& st) {
    os << st.surname << " " << st.dbl;

    return os;
}

int main() {

    vector<Student> students = { {"ivanova", 80, Gender::Female},
                                 {"petrov", 90, Gender::Male}, 
                                 {"ivanov", 700, Gender::Male} };

    return 0;
}