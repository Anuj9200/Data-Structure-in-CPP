#include <iostream>
using namespace std;

void print(int arr[], int idx, int n){
    if(idx == n)
        return;
    cout<<arr[idx]<<" ";
    print(arr, idx+1, n);


    //// Reverse Order :: 
    // if(idx == n)
    //     return;
    // print(arr, idx+1, n);
    // cout<<arr[idx]<<" ";
}

int main(){
    int arr[10];
    int n;
    cout<<"enter n :";
    cin>>n;

    cout<<"Input element of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    print(arr, 0, n);

    return 0;
}