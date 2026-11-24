#include <iostream>
using namespace std;

int linear_Search(int arr[], int x, int idx, int n){
    if(idx == n)
        return -1;
    if(arr[idx] == x)
        return idx;

    return linear_Search(arr, x, idx+1, n);
}

int main(){
    int arr[10];
    int n,x;
    cout<<"enter n :";
    cin>>n;

    cout<<"Input element of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to Search : ";
    cin>>x;
    
    int idx = linear_Search(arr, x, 0, n);
       
    if(idx >= 0)
        cout<<"Element found at index :: "<<idx;
    else    
        cout<<"Not found";


    return 0;
}