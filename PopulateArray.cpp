#include <iostream>
using namespace std;

int populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
    cout<< arr;
}

int main(){

    int arr[5] {1, 2, 3, 4, 5};

    int size = 5;
    cout << "hello";
    populate(arr, size);
    cout << populate;
    return 0;
}

// not find 