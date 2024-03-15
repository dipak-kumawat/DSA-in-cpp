#include   <iostream>
using namespace std;

void print(int &a){
    cout << "value of  a in function : "<< a << endl;
}

void size(int *a){
        cout << "size of a in function "<< sizeof(a)<< endl;

}

 void solve(int *arr, int size) {
	cout << "Size of array inside solve func: " << sizeof(arr) << endl;
	cout << "Inside solve -> arr: " << arr << endl;
	cout << "Inside solve -> &arr: " << &arr << endl;
	// *arr = *arr + 1;
}

int main (){

    int a = 5;
    int* ptr = &a;
    // cout << "Value of a is: "<< a<< endl;
    // cout << "Value of *ptr is: " << *ptr << endl;
    // cout << "Value of ptr is: " << ptr << endl;
    // cout << "Value of &a is: " << &a << endl;
    // cout << "Value of &ptr is: " << &ptr << endl;
    cout <<" size of a: " << sizeof(a) << endl;
    cout <<" size of ptr : " << sizeof(ptr) << endl;
    // print(a);
    // print(*ptr);

    // cout << "size of a in main "<< sizeof(a)<< endl;
    // cout << "size of a in main "<< sizeof(*ptr)<< endl;

    size(a);
    size(*ptr);

    int arr1[3] = {10,20,30};
    ///cout << "Size of array: " << sizeof(arr) << endl;
	solve(arr1,3);

	// for(int i=0; i<3; i++) {
	// 	cout << arr1[i] << " ";
	// }
	
    
	// int arr[3] = {10,20,30};
	// cout << "Size of array: " << sizeof(arr) << endl;
	// solve(arr,3);
	// cout << "Inside main -> arr: " << arr << endl;
	// cout << "Inside main -> &arr: " << &arr << endl;

	// int arr[5] = {1,2,3,4,5};

	//pointer to an array
	// int* ptr1 = arr;
	//pointer to an array
	// int (*ptr)[5] = &arr;
	// cout << (*ptr)[0];
	

	// char ch[10] = "Babbar";
	// char* cptr = &ch;


    return 0;
}