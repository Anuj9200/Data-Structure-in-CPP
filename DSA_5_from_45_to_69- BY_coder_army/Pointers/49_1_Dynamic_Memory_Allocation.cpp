#include <iostream>
using namespace std;
int main(){
    int *p = new int(10);

    // OR

    int *ptr = new int;
    cout<<"Input ptr : ";
    cin>>*ptr;
    cout<<*ptr<<endl;


    // Dynamically Array
    
    int n;
    cout<<"input n : ";
    cin>>n;
    int *arr = new int [n];

    cout<<"Input array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete ptr;
    delete []arr;

    return 0;
}