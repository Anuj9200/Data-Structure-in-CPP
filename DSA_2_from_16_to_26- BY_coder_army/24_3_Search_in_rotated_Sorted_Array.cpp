#include <iostream> 
using namespace std;

int Binary_Search(int arr[], int n, int target){
    int start = 0, end = n-1, mid;
    int ans = -1;
    while(start<=end){
        mid = start+(end - start)/2;

        if(arr[mid]==target) return mid;
        
        // Left half sorted
        else if(arr[mid]>=arr[0]){
            if(arr[start] <= target && arr[mid] > target){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        
        // Right half sorted
        else {
            if(arr[mid] < target && arr[end] >= target){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
 
    }

    return -1;
}

int main(){
    int n, arr[100], key;
    
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the Key : ";
    cin>>key;

    cout<<"The index of that key in Array : "<<Binary_Search(arr, n, key);

    return 0;
}