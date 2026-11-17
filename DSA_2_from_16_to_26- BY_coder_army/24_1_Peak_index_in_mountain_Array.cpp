#include <iostream> 
using namespace std;

int Binary_Search(int arr[], int n){
    int start = 0, end = n-1, mid;

    while(start<=end){
        mid = end+(start - end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        else if(arr[mid] > arr[mid-1]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int n, arr[100];
    
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"the index of peak element in mountain Array : "<<Binary_Search(arr, n);


    return 0;
}