#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

struct Ant
{
    int legs;
    string name;
    string color;
    bool isMarried;
};

vector<Ant> GetAntPopulation() {
    vector<Ant> antsArmy(1'000'000);

    return antsArmy;
}

void AntsArmySize(vector<Ant>& ants) {
    cout << "AntsArmy include: " << ants.size() << " ants" << endl;
}


int main()
{
    auto start = steady_clock::now();
    vector<Ant> antsArmyAVTF = GetAntPopulation();
    auto finish = steady_clock::now();
    cout << duration_cast<milliseconds>(finish - start).count() << endl;
    
    start = steady_clock::now();
    AntsArmySize(antsArmyAVTF);
    finish = steady_clock::now();
    cout << duration_cast<milliseconds>(finish - start).count() << endl;

    return 0;
}
