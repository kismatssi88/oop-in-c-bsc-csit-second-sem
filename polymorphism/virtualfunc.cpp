#include <iostream>
using namespace std;
 
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a generic sound" << endl;
    }
};
 
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Woof Woof!" << endl;
    }
};
 
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says: Meow!" << endl;
    }
};
 
int main() {
    Animal* animals[2];      // array of base class pointers
    Dog d;
    Cat c;
 
    animals[0] = &d;
    animals[1] = &c;
 
    for (int i = 0; i < 2; i++) {
        animals[i]->sound();   // correct overridden version picked at RUNTIME for each element
    }
    return 0;
}
