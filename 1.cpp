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
    
    // int arr[5];
    // int n = 5;
    // for(int i =0; i<n; i++){
    //     cout<< "enter the number for index:" <<i << " ";
    //     cin >> arr[i];
    // }
    // // printing the array 
    // cout << "Array = [";
    // for(int i =0; i<n; i++){
    
    //     cout<<arr[i] << " ";
    // }
    // cout << "]" << endl;
    // int sum = 0 ;
    // for(int i = 0; i<n; i++){
    //     sum = sum + arr[i];
    // }
    // cout << "Sum of all array is: " << sum;

    // int arr[5]= {1, 2, 3, 4, 5 };
    // int target = 5;
    // int n = 5;
    // for(int i = 0; i< n; i++){
    //     if(target == arr[i]){
    //         cout<< "target found";
    //         break;
    //     }
    //     // else{
    //     //     cout<<"Target nout found";
    //     // }
    // }

    int arr[10] = {1, 1, 1, 0, 0 ,0, 0 ,1,1 , 1};
    int zeroCount = 0;
    int OneCount = 0;
    int n = 10;
    for (int i = 0; i<n; i++ ){
        if(1 == arr[i]){
            OneCount++;
        }
        if(0 == arr[i]){
            zeroCount++;
        }
    }
    cout<<"total number of zero: "<<zeroCount<<endl;
    cout<< "Total Number o one: "<< OneCount<<endl;
    return 0;
}