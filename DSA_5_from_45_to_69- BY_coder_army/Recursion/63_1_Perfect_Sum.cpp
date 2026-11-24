// Negative number is also present in the array

#include <iostream>
#include<vector>
using namespace std;

int Subsets(int arr[], int idx, int n, int sum){
    if(idx == n){
        return sum == 0;
    }

    return Subsets(arr, idx+1, n, sum) + Subsets(arr, idx+1, n , sum-arr[idx]);

}

int main(){
    int arr[] = {2, 5, 6, 1, 3};
    int sum = 8;
     
    int count = Subsets(arr, 0, 5, sum);
    
    cout<<count;

    return 0;
}