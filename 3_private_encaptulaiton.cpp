#include <bits/stdc++.h>
using namespace std;

class MyClass{
    private:
    int private_var;//private variable

    void private_method(){ //private method
        cout<<"This is a private method"<<endl;
    }

    public:
    MyClass(){
        private_var = 42;
    }
    void public_method(){
        cout<<"Accessing private variable: "<< private_var <<endl;
        private_method(); // Accessing private method within the class
    }
};

int main()
{
    MyClass obj;
    obj.public_method();
    // Trying to access private members from outside the class
    // Uncommenting the lines below will cause a compile-time error
    // cout << obj.private_var;
    // obj.private_method();
    return 0;
}