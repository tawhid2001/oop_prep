#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        void (*value)();//pointer to a function that returns void
};

void display(){
    cout<<"I am methods"<<endl;
}

int main()
{
    A obj; //creating a cpp object of class A
    obj.value = display; // Assign the function pointer to 'value'

    obj.value(); // calling the function using function pointer

    cout<<"Function pointer address: "<< (void*)obj.value <<endl; // displaying address of obj.value
    cout<<"Object address: " << &obj <<endl; // displaying object address
    return 0;
}