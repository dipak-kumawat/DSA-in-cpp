#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

int main(){

    // int arr[5] = {12, 23, 40, 5, 3};
    vector<int> arr ={12, 23, 40, 5, 3};
    int size = arr.size();
    cout<<"The number of size is:"<< size <<endl;

    cout <<endl<<"The Given Array is: " ;
     for (int i = 0; i < size; i++)
     {
        cout << arr[i] << " ";
     }


    // ASCENDING ORDER 

    std::sort(arr.begin(), arr.end()); 
    cout <<endl<<"The sorted Array is: ";
    for (int i = 0; i < size; i++)
    {
    cout  << arr[i] << " ";
    }  

        
     // DESCEINDIN ORDER 
    sort(arr.begin(), arr.end()); 
    cout <<endl<<"The sorted Array is: ";
    for (int i = 0; i < size; i++)
    {
    cout  << arr[i] << " ";
    }  


    return 0 ;

}