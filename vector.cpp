#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    cout<<"size of array is "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<endl;

    }
    
}

int main(){

    // use of vector function in array 
vector<int>v;
v.push_back(12);
v.push_back(12);
v.push_back(12);
v.push_back(12);

print(v);

}