#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        string name;

        A(string name){
            this->name = name;
        }

        void display(){
            cout << name << endl;
        }
};

class B : public A{
    public:
    B (string name) : A(name){

    }
};

int main()
{
    B obj("sayed");
    obj.display();
    return 0;
}