#include <iostream>
#include <vector>
using namespace std;
vector<int> Two_Diff(int arr[], int n, int diff){
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
    if(diff<0){
        diff *= -1;
    }
    // vector<int>ans;
    int start=0, end=1;
    while(start<end){
        if(arr[end]-arr[start] == diff){
            // ans.push_back(arr[start]);   // +1 because in leetcode question it is 1 base indexing
            // ans.push_back(arr[end]);
            return {arr[start], arr[end]};
        }
        else if(arr[end]-arr[start] > diff){
            start++;
        }
        else{
            end++;
        }
    }
}
int main(){
    int arr[100],n, diff;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter Elments of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Difference Value : ";
    cin>>diff;

    vector<int>a = Two_Diff(arr, n, diff);

    cout<<"\nNumbers are : ";
    for(int i=0; i<2; i++){
        cout<<a[i]<<" ";
    }


    return 0;
}