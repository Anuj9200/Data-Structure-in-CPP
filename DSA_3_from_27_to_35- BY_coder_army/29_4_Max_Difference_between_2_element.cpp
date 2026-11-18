// CONSTRAINTS :: substraction hoga right wale se left wale element ka
#include <iostream>
using namespace std;

int max_difference(int arr[], int n){
    int suffix = arr[n-1];
    int max_diff=0;
    for(int i=n-2; i>=0; i--){    
        max_diff = max(suffix-arr[i], max_diff);
        suffix = max(suffix, arr[i]);
    }
    return max_diff;
}
int main(){
    int arr[10], n;
    cout<<"Enter n : ";
    cin>>n;
 
    cout<<"Enter elements of array : ";
    for(int i=0; i<n; i++){
    cin>>arr[i];
    }

    cout<<"Max sum of subarray is : "<<max_difference(arr, n);

    return 0;
}