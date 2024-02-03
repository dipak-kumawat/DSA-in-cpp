#include <iostream>
#include <vector>
using namespace std;

int squareRoot(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (s-e)/2;
    int ans = -1;

    while (s <= e)
    {
        if (mid*mid == x)
        {
            return mid;
        }
        else if(mid*mid < x)
        {
            ans = mid;
            s = mid+1;
        }
        else //( mid * mid  > number)
        {
            e = mid-1;
        }
        mid = s + (s-e)/2;
    }
    return ans;
}

int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s + (e-s)/2;
        int ans = -1;

        while(s <= e) {
            //kya mid hi toh answer nahi
            if(mid*mid == x) {
                return mid;
            }
            else if(mid*mid < x) {
                //ans store
                //right me jao
                ans = mid;
                s = mid+1;
            }
            else {
                //left me jana h 
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

int newsquare(int x){
    int s = 0;
    int e =x;
    int ans = -1;

    while(s<=e){
    long  int mid = s + (e-s)/2;
    int val = mid*mid;
        if(val == x) {
            return mid;
        }else if(val < x) {
            ans = mid;
            s =mid+1;
        }else {
            e = mid- 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int sqare(int n){
       int low = 1;
        int high = n;
        while (low<=high){
            long mid = low +(high-low)/2;
            long val = mid*mid;
            if(val>(long)(n)){
                high =(int) mid-1;
            }
            else {
                low =(int) mid +1 ;
            }
        }
        return low-1;
    }


int main()
{

    int number = 50;
    int n = newsquare(60);


    cout << " squareroot of: " << n << endl;

    return 0;
}