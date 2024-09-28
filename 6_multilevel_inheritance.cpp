#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int valueA;

public:
    A(int value_a) {
        valueA = value_a;
    }

    void displayA() {
        cout << "Value from class A: " << valueA << endl;
    }
};

// Derived class from A
class B : public A {
protected:
    int valueB;

public:
    B(int value_a, int value_b) : A(value_a) {
        valueB = value_b;
    }

    void displayB() {
        cout << "Value from class B: " << valueB << endl;
    }
};

// Further derived class from B
class C : public B {
private:
    int valueC;

public:
    C(int value_a, int value_b, int value_c) : B(value_a, value_b) {
        valueC = value_c;
    }

    void displayC() {
        cout << "Value from class C: " << valueC << endl;
    }
};

int main() {
    int valueA, valueB, valueC;
    valueA = 1;
    valueB = 2;
    valueC = 3;

    C obj(valueA, valueB, valueC);
    obj.displayA();  // Inherited from A
    obj.displayB();  // Inherited from B
    obj.displayC();  // Defined in C

    return 0;
}
