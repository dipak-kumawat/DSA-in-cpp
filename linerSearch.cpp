// Debug the code. Linear Search. 

/* void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return;
        }
    }
    return;
} */


// answer 
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[9] = { 10, 20, 30, 40, 50, 60, 70 , 80, 90};
    int n =9;
    int value = 80;
    cout<< linearSearch(arr, n , value);

}