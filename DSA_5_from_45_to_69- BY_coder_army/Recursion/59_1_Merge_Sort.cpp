#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    vector<int>temp(end-start+1);   // temp to store aray after merging
    int left = start, right = mid+1, idx = 0;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[idx] = arr[left];
            idx++, left++;
        }
        else{
            temp[idx] = arr[right]; 
            idx++, right++;
        }
    }

    // agr left array ka element bcha hua hai
    while(left <= mid){
        temp[idx] = arr[left];
        idx++, left++;
    }
    // agr left array ka element bcha hua hai
    while(right <= end){
        temp[idx] = arr[right];
        idx++, right++;
    }

    idx=0;
    while(start <= end){
        arr[start] = temp[idx];
        start++, idx++;
    }
}
void merge_sort(int arr[], int start, int end){
    if(start == end)
        return;

    int mid = start + (end-start)/2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};

    merge_sort(arr, 0, 9);

    cout<<"Array after applying Merge Sort :: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}