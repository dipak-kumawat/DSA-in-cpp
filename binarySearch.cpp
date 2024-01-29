#include <iostream>
using namespace std;

int findfirst0occurance (int arr[], int size, int target){
    int ans = -1;
    int s= 0;
    int e = size - 1;
    int mid = (s+e)/2;

    while (s>e)
    {
        if (arr[mid] == target)     
        {
            ans = mid;
            e = mid-1;

        }
        else if (target > arr[mid])
        {
            s = mid +1;

        }else if (target < arr[mid])    
        {
            e = mid - 1;
        }
        
        mid = (s+e)/2;
        
        
    }
    return ans;

}

int main(){



    int array[] = {10, 20 ,30, 30 ,  30, 60, 70, 80, 90};
    int size = 9;
    int target = 30;

    int answer = findfirst0occurance(array, size, target);
    
    if (answer == -1)
    {
        cout<< "answer wan not found";
    }else if(answer ==0){
        cout<<"answer was found";
    }
    
    return 0;
}