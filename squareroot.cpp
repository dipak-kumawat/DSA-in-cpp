#include <iostream>
#include <vector>
using namespace std;

int squareRoot(int number){
      int left = 0;
      int right = number - 1;
      int i = 0;
      int ans = -1;
      int mid = left + (left - right)/2;

      while (left <= right)
      {
        if ( mid * mid  == number  ) {
            return mid;
        }else if ( mid * mid  > number){
            right = mid -1;
        }else if ( mid * mid  < number ){
            ans = mid;
            left = mid +1;
        }else if ( left = right ){
            return left;
        }
        mid = left + (left - right)/2;
      }
      return ans;

      
}

int main(){

    int number = 64;
    int n = squareRoot(number);

    cout << " squareroot of: "<< n <<endl;

    return 0;
}