// Time Complexity = O(n^2) AND  Space Complexity = O(1)
#include <iostream>
#include <vector>
using namespace std;
int Three_Sum(int arr[], int n, int target){
    // Sort Array:
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else break;
        }
    }

    for(int i=0; i<n-2; i++){
        int X = target - arr[i];
        int start=i+1, end=n-1;
        
        while(start<end){
            if(arr[start]+arr[end] == X){
                return 1;
            }
            else if(arr[start]+arr[end] > X){
                end--;
            }
            else{
                start++;
            }
        }
    }
    return 0;
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

    if(Three_Sum(arr, n, target)){
        cout<<"triplet's are found whose sum is given integer "<<target;
    }
    else{
        cout<<"Triplet not Found ";
    }

    return 0;
}