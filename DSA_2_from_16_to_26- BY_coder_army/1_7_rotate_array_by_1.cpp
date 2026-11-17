// In click-wise

#include <iostream>
using namespace std;
int main(){
    int n, arr[100];
    cout<<"Enter n : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout<<"Requires Rotated array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}