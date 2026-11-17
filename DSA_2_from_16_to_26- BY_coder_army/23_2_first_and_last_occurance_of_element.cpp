#include <iostream>
using namespace std;

void binary_search(int arr[], int n, int key){
    int start = 0, end = n-1, first = -1, last = -1;

    // for first occurance
    while(start <= end){
        int mid = (start+end)/2;    
        if(arr[mid] == key){
            first = mid;
            end  = mid - 1;
        }
        else if(arr[mid]<key) start = mid + 1;
        else end = mid - 1;
    }

    // for last occurance
    start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;    
        if(arr[mid] == key){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<key) start = mid + 1;
        else end = mid - 1;
    }

    cout<<" first occurance is "<<first<<endl;
    cout<<" last occurance is "<<last<<endl;

}

int main(){
    int n, arr[100], key;
    cout<<"ENter n : ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value you want to search : ";
    cin>>key;

    binary_search(arr, n, key);

    return 0;
}