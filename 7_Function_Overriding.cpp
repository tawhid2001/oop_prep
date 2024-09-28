#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {  // Using 'virtual' to allow overriding
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // Overriding the method from the base class. The override keyword (optional but good practice) specifies that makeSound is meant to override a base class method.
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Animal* dog = new Dog();

    animal->makeSound();  // Outputs: Animal makes a sound
    dog->makeSound();     // Outputs: Dog barks

    delete animal;
    delete dog;
    return 0;
}
