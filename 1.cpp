// Your First C++ Program

#include <iostream>
using namespace std;
int main() {
    // int arr[5];
    // int n = 6; 
    // cout << "hello jo"<< endl ;
    // for(int i = 0;  i<n; i++){
    //     cout << "enter the value for index " << i << ":" ;
    //     cin >>arr[i];
    //     cout << endl;
    // }

    // cout << "printing an array"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    
    int arr[5];
    int n = 5;
    for(int i =0; i<n; i++){
        cout<< "enter the number for index:" <<i << " ";
        cin >> arr[i];
    }
    // printing the array 
    cout << "Array = [";
    for(int i =0; i<n; i++){
    
        cout<<arr[i] << " ";
    }
    cout << "]" << endl;
    int sum = 0 ;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of all array is: " << sum;
    return 0;
}