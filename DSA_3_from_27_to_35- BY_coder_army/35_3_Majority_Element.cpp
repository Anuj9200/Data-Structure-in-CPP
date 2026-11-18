#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<int>arr = {3, 3, 3, 3, 1, 3, 2, 2, 1, 3, 3};
    int n = arr.size(), candidate, count=0;

    for(int i=0; i<n; i++){
        if(count == 0){
            candidate = arr[i];
            count++;
        }
        else{
            if(arr[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }
    }
    cout<<"Majority Element is : "<<candidate;
    
    return 0;
}