#include   <iostream>
using namespace std;

int main (){

    int a = 5;
    int* ptr = &a;
    cout << "Value of a is: "<< a<< endl;
    cout << "Value of *ptr is: " << *ptr << endl;
    cout << "Value of ptr is: " << ptr << endl;
    cout << "Value of &a is: " << &a << endl;
    cout << "Value of &ptr is: " << &ptr << endl;
    cout <<" size of a: " << sizeof(a) << endl;
    cout <<" size of ptr : " << sizeof(ptr) << endl;


    return 0;
}