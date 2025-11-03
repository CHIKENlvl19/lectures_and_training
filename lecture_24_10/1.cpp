#include <iostream>

using namespace std;

struct History {
    History(const string& name) : name(name) {
        cout << "Create object " << name << endl;
    }

    ~History() {
        cout << "Destroy object " << name << endl;
    }

    string name;
};

class Magic {
public:

     virtual void result() const {
        cout << "abstract result" << endl;
    }
};

class Acio : public Magic {
public:

    void result() const override {
        cout << "Magic get object" << endl;
    }
};

class Avadanakedaura : public Magic {
public:

    void result() const override {
        cout << "Magic kill object" << endl;
    }
};

class Crucio : public Avadanakedaura {
public:

    void result() const override final {
        cout << "Magic twist object" << endl;
    }
};

struct Food {

    Food(const string& s) : h(s + "eda") { };

    History h{"eda"};
};

struct Kabachok : public Food  {
    Kabachok(const string& s) : Food(s), h(s) { }
    History h{"kabachok"};
};


class Characters {
public:
    Characters(const string& str) : type(str){}
    
    void Eat(Food food) {
        cout << type << " eats a Tasty " << " in " << endl;
    }
    /*
     protected:
     string type = "basic";
     };*/
    
    virtual void Sleep(){  // полиморфная функция
        cout << "boba" << endl;
        /*
        if (type == "Mabel"){
            cout << "alala alalal alala" << endl;
        }
        if (type == "Dipper"){
            cout << "AAAAAAAAAAAAAAAAAAAAAAAA" << endl;
        }
        if (type == "NormalHuman"){
            cout << "ZZZZZZZZZZZZZZZZZZZZZZZOV" << endl;
        }
        if (type == "Stan"){
            cout << "ZZZZZZZZZZZZZ" << name << " the best" << endl;
        }*/
    }
    const string type = "basic";
};

class Mabel : public Characters {
public:
    Mabel() : Characters("Mabel"){}
    
    void Sleep(){
        cout << "alala alalal alala" << endl;
    }
};

class Dipper : public Characters {
public:
    Dipper() : Characters("Dipper"){
    }
    
    void Sleep(){
        cout << "AAAAAAAAAAAAAAAAAAAAAAAA" << endl;
    }
   
};

class NormalHuman : public Characters {
public:
    NormalHuman () : Characters("NormalHuman"){
    }
    
    void Sleep(){
        cout << "ZZZZZZZZZZZZZZZZZZZZZZZOV" << endl;
    }
};

class Stan : public Characters {
public:
    Stan() : Characters("Stan"){
    }
    string name = "stan";
    
    void Sleep(){
        cout << "ZZZZZZZZZZZZZ" << name << " the best" << endl;
    }
   
    
};
void Restraunt(Characters& chr, Food& fd){
    chr.Eat(fd);
}

void Hostel(Characters& ch){
    ch.Sleep();
}


int main(){

    //Kabachok k{"k1"};
    //Kabachok k2{"k2"};


    cout << endl;


    /*Magic m;
    Acio a;
    Avadanakedaura av;
    Crucio cr;
    m.result();
    a.result();
    av.result();
    cr.result();*/

    Acio a;
    Magic& m = a;
    m.result();

    return 0;
}
