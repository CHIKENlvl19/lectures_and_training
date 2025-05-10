#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

enum class Gender : uint8_t {Female, Male};

struct Stud {
    string surname;
    uint64_t dbl;
    Gender gender = Gender::Male;
};

ostream& operator << (ostream& os, const Stud& stud) {

    os << stud.surname << " ";
    os << stud.dbl << " ";
    //os << stud.gender << " ";

    return os;
}

ostream& operator << (ostream& os, const Stud& st) {
    os << st.surname << " " << st.dbl;

    return os;
}

int main() {

    vector<Stud> students = { {"ivanov", 80, Gender::Male},
                                 {"petrov", 90, Gender::Male}, 
                                 {"ivanov", 700, Gender::Male} };

    Stud loud;

    for (auto i : students)
    {
        if(i.gender == Gender::Male && i.dbl >= 80)
        {
            cout << i << endl;
        }
    }

    auto byGender = [](const Stud& s){
        return s.gender == Gender::Male && s.dbl >= 80;
    };

    //вывод через copy_if
    //copy(students | filtered(byGender(Gender::Male, 80)));
    copy_if(students.begin(), students.end(), ostream_iterator<Stud>(cout, "\n"), byGender);

    // алгоритм any_of

    /*  true false any_of(students, [](Student st)) {

    });  */

    bool has_high_score = any_of(students.begin(), students.end(), [](const Stud& st){
        return st.dbl > 90;
    });

    vector<int> n = {1, 2, 3, 4, 5, 6};
    max_element(n.begin(), n.end());
    auto res = minmax_element(n.begin(), n.end());

    *res.first; // min
    *res.second; // max

    // вывод контейнера на экран

    for (size_t i = 0; i < students.size(); i++); // плохой вариант

    for(auto i : students)
    {
        cout << i << " "; // вывод еще лучше
    }

    //чтобы работал copy, поток должен уметь выводить струкруры
    //cout << copy(students, ostream_iterator<Stud> (cout, "\n"));

    cout << "Есть ли студент с баллом > 90: " << has_high_score << endl;

    return 0;
}