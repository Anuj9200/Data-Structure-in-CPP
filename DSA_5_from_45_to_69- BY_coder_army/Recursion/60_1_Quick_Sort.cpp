#include <iostream>
#include<vector>
using namespace std;

int partition(int arr[], int start, int end){
    int pos = start;
    for(int i=start; i<=end; i++){
        if(arr[i]<=arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;  
} 

void quick_sort(int arr[], int start, int end){
    if(start >= end)
        return;

    // find original idx of pivot element (after sorted aray)
    int pivot = partition(arr, start, end);

    // Left Side 
    quick_sort(arr, start, pivot-1);

    //Right Side
    quick_sort(arr, pivot+1, end);
}

int main(){
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};

    quick_sort(arr, 0, 9);

    cout<<"Array after applying Merge Sort :: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}