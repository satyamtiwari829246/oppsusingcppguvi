#include <iostream>
using namespace std;


class Character {
public:
    virtual void attack() = 0;   // Pure virtual function
    virtual ~Character() {}      // Virtual destructor
};


class Warrior : public Character {
public:
    void attack() override {
        cout << "Warrior slashes with Sword!" << endl;
    }
};

class Mage : public Character {
public:
    void attack() override {
        cout << "Mage casts Fireball!" << endl;
    }
};

class Archer : public Character {
public:
    void attack() override {
        cout << "Archer shoots an Arrow!" << endl;
    }
};


int main() {
    string type;
    cin >> type;

    Character* character = nullptr;   // Base class pointer

    if (type == "Warrior") {
        character = new Warrior();
    }
    else if (type == "Mage") {
        character = new Mage();
    }
    else if (type == "Archer") {
        character = new Archer();
    }
    else {
        cout << "Invalid Character Type!" << endl;
        return 0;
    }

    character->attack();   // Dynamic binding

    delete character;      // Proper cleanup

    return 0;
}