#include <iostream>
#include <vector>

using namespace std;

const double a = 0.6180339887;

struct ECS {

 public:

    int hash = 55;
    vector<string> logs; // Заюзать в курсаче

    void Hash() {
        double x = key * a;
        double xx = x - int(x);
        hash = int(100 * xx);

        logs.push_back("hash was used");
    }

    void Get() const { //  методы, которые не меняют пременные класса, являются константными
        
    } 

    ECS() {
        cout << "Default Constructor" << endl;
    }

    ECS(int x) : key(x) {
        cout << "Constructor" << endl;
    };

    ~ECS() { // Объекты разрушаются в обратном порядке
        cout << "Destructor" << endl;
        for(auto n : logs)
        {
            cout << n << endl;
        }
    }

 private:
    int key = 12345;

};

int main() {

    ECS ecs;

    ecs.Hash();
    ecs.Hash();



    return 0;
}