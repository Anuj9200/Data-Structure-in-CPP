// Negative element are not present

#include <iostream>
#include<vector>
using namespace std;

int Subsets(int arr[], int idx, int n, int sum){
    if(sum == 0){
        return 1;
    }
    if(n==idx || sum<0){ 
        return 0;
    }

    return Subsets(arr, idx+1, n, sum) + Subsets(arr, idx, n , sum-arr[idx]);

}

int main(){
    int arr[] = {2, 3, 4};
    int sum = 6;
     
    int count = Subsets(arr, 0, 3, sum);
    
    cout<<count;

    return 0;
}