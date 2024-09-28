#include <iostream>
using namespace std;

class Calculator {
public:
    // Function with two parameters
    int sum(int num1, int num2) {
        return num1 + num2;
    }

    // Overloaded function with three parameters
    int sum(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

int main() {
    Calculator cal;
    cout << cal.sum(1, 2, 3) << endl; // Outputs 6
    cout << cal.sum(1, 2) << endl;    // Outputs 3
    return 0;
}
