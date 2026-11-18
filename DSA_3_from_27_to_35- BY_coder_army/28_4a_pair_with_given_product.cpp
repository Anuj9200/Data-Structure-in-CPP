// for this question array is already sorted 
// Without Using vector
#include <iostream>
using namespace std;

int* pair_with_given_product(int arr[], int n, int target){
    static int result[2];
    result[0] = -1;
    result[1] = -1;
    int start = 0, end = n-1;
    while(start < end){
        if(arr[start]*arr[end] == target){
            result[0] = arr[start];
            result[1] = arr[end];
            return result;
        }
        else if(arr[start]*arr[end] < target){
            start++;
        }
        else{
            end--;
        }
    }
    return result;
}

int main(){
    int arr[100],n, target;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter Elments of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Target Value : ";
    cin>>target;

    int *ans = pair_with_given_product(arr,n, target);

    if(*ans != -1){
        cout<<"Pair : ";
        for(int i=0; i<2; i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"Pairs Not Found";
    }

    return 0;
}