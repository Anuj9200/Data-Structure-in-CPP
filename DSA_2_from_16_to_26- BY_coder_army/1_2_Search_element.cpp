#include <iostream>
using namespace std;

int main(){
    int n, arr[100], x;

    cout<<"enter n : ";
    cin>>n;

    cout<<"Input the Elements of an array : \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to find : ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Element is found at index "<<i;
            break;
        }
    }
    
    return 0;
}