#include <iostream>
#include<vector>
using namespace std;

bool Find(int arr[], int idx, int n, int target){
    if(target == 0){
        return 1;
    }
    if(idx==n || target<0){
        return 0;
    }

    return Find(arr, idx+1, n, target) || Find(arr, idx+1, n , target-arr[idx]);

}

int main(){   
    int arr[] = {1, 2, 3, 4};
    int target;

    cout<<"Enter Target : ";
    cin>>target;
     
    cout<<Find(arr, 0, 4, target);
    
    return 0;
}