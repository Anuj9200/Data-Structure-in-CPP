#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int key){
    int start = 0, end = n-1, mid=0;

    while(start <= end){
        mid = (start + end) / 2;   // mid = start + (end-start)/2; // >> both are same
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int n, key; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the Key : ";
    cin>>key;

    if(Binary_Search(arr, n, key)){
        cout<<"No. found at index "<<Binary_Search(arr, n, key);
    }
    else{
        cout<<"Key not found ";
    }
    
    // cout<<Binary_Search(arr, n, key);

    return 0;
}