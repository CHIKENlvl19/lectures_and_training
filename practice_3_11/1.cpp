#include <iostream>

using namespace std;

struct Trait {
    int self_esteem = 0;
    string type = "";
};

struct Kindness : public Trait {

    Kindness() {
        self_esteem = 50;
        type = "kindness";
    }
};

struct Bravery : public Trait {

    Bravery(){
        self_esteem = 500;
        type = "bravery";
    }
};

struct Honesty : public Trait {

    Honesty() {
        self_esteem = 100;
        type = "honesty";
    }
};

struct Character {

    Character(const string& str) : type(str) {}

    const string type = "charachter";

    void Wish(const Trait& t) const {
        cout << type << " recieved " << t.self_esteem << " self_esteem by " 
            << t.type << endl;
    }

    virtual void GetWet() const {
        cout << "GetWet Parent" << endl;
    }

    virtual void Defend() const {
        cout << "Defend Parent" << endl;
    }
};

struct IronMan : public Character {

    IronMan() : Character("IronMan") {}

    void GetWet() const override{
        cout << "IronMan became rusty" << endl;
    }

    void Defend() const override{
        cout << "IronMan defended an attack!" << endl;
    }

};

struct Scary : public Character {

    Scary() : Character("Scary") {}

    void GetWet() const override{
        cout << "Scary fell apart" << endl;
    }

    void Defend() const override{
        cout << "Scary did not defend an attack :(" << endl;
    }

};

struct Lion : public Character {

    Lion() : Character("Lion") {}

    void GetWet() const override{
        cout << "Lion just got wet" << endl;
    }

    void Defend() const override{
        cout << "Lion defended an attack and fought back!" << endl;
    }

};

struct Ellie : public Character {
    
    Ellie(const string& s1, const string& s2) : Character("Ellie"), attribute(s1), attribute2(s2) {}
    
    void GetWet() const override{
        cout << type << " used " << attribute << " since she's not stupid" << endl;
    }

    void Defend() const override {
        if(attribute2 == "Sword")
        {
            cout << type << " defended an attack using " << attribute2 << endl;
        }
        else
        {
            cout << type << " did not defended an attack. Ellie is dead." << endl; 
        }
    }

    string attribute = "atr";
    string attribute2 = "atr2";
};

void WetCharacter(Character& ch) {
    ch.GetWet();
}

void AttackCharacter(Character& ch) {
    ch.Defend();
}

int main() {

    //  добавить виртуальный метод, любой, и для него элемент, типа атрибута
    //  создавать Элли с двумя атрибутами и для каждого виртуальная функция

    Kindness k;
    Bravery b;
    Honesty h;

    IronMan im;
    Scary sc;
    Lion li;

    Ellie ellie("umbrella", "Sword");
    ellie.GetWet();

    WetCharacter(im);
    WetCharacter(sc);
    WetCharacter(li);
    WetCharacter(ellie);

    cout << endl;

    AttackCharacter(im);
    AttackCharacter(sc);
    AttackCharacter(li);
    AttackCharacter(ellie);


    //im.Wish(h);
    //sc.Wish(b);
    //li.Wish(k);

    //im.GetWet();
    //sc.GetWet();
    //li.GetWet();

    return 0;
}