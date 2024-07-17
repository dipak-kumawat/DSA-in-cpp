#include <iostream>
using namespace std;

    int merge(int arr[], int start, int end){
        // Create temp arrays to hold the data of original array.
        int mid = (start+end)/2;
        
        int lenLeft = mid - start -1;
        int lenRight = mid - end;

        int *right = new int[lenRight];
        int *left = new int[lenLeft];
        
        int k = start;

        while(lenRight > lenLeft){

            
        }

    }


    int mergeSort(int arr[], int start, int end){

        if (start > end) return;
        if (start = end) return;  // base case: only one element in the array.

        // int mid = start + (end - start) / 2;
        int mid = (start+end)/2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end); // sort the right half of the array recursively

        // now we can combine them

        merge(arr, start, end);



    }



int main(){

    int arr[8] = {20, 30, 5, 10, 90, 60, 100, 40};
    int start = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int end = size -1;

    mergeSort(arr, start, end);

    for(int i = start; i < end; I++) {
        cout << arr[i] << " ";
    }

    return 0;
}