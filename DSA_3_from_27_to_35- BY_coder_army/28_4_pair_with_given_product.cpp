#include <iostream>
#include <vector>
using namespace std;
vector<int> Two_Product(int arr[], int n, int prod){
    // Sorting 
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j-1] > arr[j]){
                swap(arr[j-1], arr[j]);
            }
            else break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // vector<int>ans;
    int start=0, end=n-1;
    while(start<end){
        if(arr[start]*arr[end] == prod){
            return {arr[start], arr[end]};
        }
        else if(arr[start]*arr[end] > prod){
            end--;
        }
        else{
            start++;
        }
    }
    return {};
}
int main(){
    int arr[100],n, diff;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter Elments of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Product Value : ";
    cin>>diff;

    vector<int>a = Two_Product(arr, n, diff);

    cout<<"Numbers are : ";
    for(int i=0; i<2; i++){
        cout<<a[i]<<" ";
    }


    return 0;
}