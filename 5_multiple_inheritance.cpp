#include <iostream>
using namespace std;

class Person {
protected: // protected so that derived classes can access them
    string name;
    int age;

public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void personalInfo() {
        cout << name << " - " << age << endl;
    }
};

class Company {
protected:
    string cname;
    string cloc;

public:
    Company(string cname, string cloc) {
        this->cname = cname;
        this->cloc = cloc;
    }

    void companyInfo() {
        cout << cname << " - " << cloc << endl;
    }
};

class Employee : public Person, public Company {
public:
    Employee(string name, int age, string cname, string cloc) 
        : Person(name, age), Company(cname, cloc) {
    }
};

int main() {
    Employee obj("sayed", 24, "Google", "USA");
    obj.companyInfo();
    obj.personalInfo();

    return 0;
}
