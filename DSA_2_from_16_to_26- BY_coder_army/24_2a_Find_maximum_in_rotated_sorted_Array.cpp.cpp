#include <iostream> 
using namespace std;

int Binary_Search(int arr[], int n){
    int start = 0, end = n-1, mid;
    int ans = arr[0];
    while(start<=end){
        mid = start+(end - start)/2;
        if(arr[mid]>=arr[0]){
            ans = arr[mid];
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n, arr[100];
    
    cout<<"Enter n : ";
    cin>>n;
 
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Maximum element in the Array : "<<Binary_Search(arr, n);


    return 0;
}