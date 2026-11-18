// for this question array is already sorted 
#include <iostream>
#include <vector>
using namespace std;
vector<int> Two_Sum(int arr[], int n, int target){
    vector<int>ans;
    int start=0, end=n-1;
    while(start<end){
        if(arr[start]+arr[end] == target){
            ans.push_back(start+1);   // +1 because in leetcode question it is 1 base indexing
            ans.push_back(end+1);
            return ans;
        }
        else if(arr[start]+arr[end] > target){
            end--;
        }
        else{
            start++;
        }
    }
    return {};
}
int main(){
    int arr[100],n, target;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter Elments of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter Target Value : ";
    cin>>target;

    vector<int>a = Two_Sum(arr, n, target);

    if (a.empty()) {
    cout << "No valid pair found";
} else {
    cout << "Indexes are : ";
    for (int i : a) {
        cout << i << " ";
    }
}



    return 0;
}