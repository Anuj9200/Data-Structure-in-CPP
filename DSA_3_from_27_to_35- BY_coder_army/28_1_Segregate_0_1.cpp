#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==1){
                end--;
            }
            else{
                swap(arr[start], arr[end]);
                start++, end--;
            }
        }
    }
}

int main(){
    int arr[100],n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter Elments of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    segregate0and1(arr, n);

    cout<<"Segregate Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}