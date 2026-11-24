#include <iostream>
#include<vector>
using namespace std;

int ways(int arr[],int n, int sum){
    if(sum ==  0){
        return 1;
    }
    if(sum < 0){
        return 0;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += ways(arr, n, sum-arr[i]);
    }

    return ans;
}

int main(){
    int arr[] = {2, 5, 3};
    int target;

    cout<<"Enter Target : ";
    cin>>target;
     
    cout<<ways(arr, 3, target);
    
    return 0;
}