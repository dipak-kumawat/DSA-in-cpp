#include <iostream>
using namespace std;

void swapArray(int index[], int n){
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if(index[i]<0){
            swap(index[i], index[j]);
            j++;
        }
    }
    
}

int main(){

    int arr[] = { 10, 20, -5, -15, 0, 54, -75, 13, -5, -1};
    int b = 10;
    cout<< b ;
    swapArray(arr, b);

    cout<<"printing the array";

    for (int i = 0; i < b; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}