#include <iostream>
using namespace std;

int BinarySearch(int arr[], int start, int end, int x){
    if(start > end)
        return -1;
    int mid = start + (end-start)/2;
    if(arr[mid] == x)
        return mid;
    else if(arr[mid] < x)
        return BinarySearch(arr, mid+1, end, x);
    else    
        return BinarySearch(arr, start, mid-1, x);
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
    
    int idx = BinarySearch(arr, 0, n-1, x);
       
    if(idx >= 0)
        cout<<"Element found at index :: "<<idx;
    else    
        cout<<"Not found";


    return 0;
}