// example :: n = 5
        //   Input  :  3 4 6 9 12 , key = 8
        //   Output :  this key should be added at Index No. : 3

        // Input  :  3 4 6 9 12 , key = 9
        //   Output : key found successfully so return its address

#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int key){
    int start = 0, end = n-1, mid, index;

    while(start <= end){
        mid = (start + end) / 2;   // mid = start + (end-start)/2; // >> both are same
        if(arr[mid] == key){
            index = mid;
            return index;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}
int main(){
    int arr[100];
    int n, key; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the Key : ";
    cin>>key;

    cout<<"this key should be added at Index No. : "<<Binary_Search(arr, n, key);

    return 0;
}