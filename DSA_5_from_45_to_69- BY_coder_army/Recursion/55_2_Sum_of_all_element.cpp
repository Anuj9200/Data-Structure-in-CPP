#include <iostream>
using namespace std;

int sum(int arr[], int idx, int n){
    if(idx == n)
        return 0;
        
    return arr[idx] + sum(arr, idx+1, n);

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
    
    int total = sum(arr, 0, n);

    cout<<"Total sum :: "<<total;

    return 0;
}