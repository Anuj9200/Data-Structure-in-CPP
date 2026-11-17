#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int k){
    int start = 0, end = n-1, mid;
    int idx = n;     // if array is sorted 

    while(start <= end){
        mid = (start + end) / 2;   // mid = start + (end-start)/2; // >> both are same
        if(arr[mid]-mid-1 >= k){
            idx = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    } 
    return idx + k;
}
int main(){
    int arr[100];
    int n, k; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the K : ";
    cin>>k;

    cout<<"this kth element is : "<<Binary_Search(arr, n, k);

    return 0;
}