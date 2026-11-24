#include <iostream>
using namespace std;

int min_ele(int arr[], int idx, int n){
    if(idx == n-1)
        return arr[idx];
        
    return min(arr[idx] , min_ele(arr, idx+1, n));

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
    
    int min = min_ele(arr, 0, n);

    cout<<"Minimum element :: "<<min;

    return 0;
}