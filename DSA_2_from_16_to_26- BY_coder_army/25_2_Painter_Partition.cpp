// ## Painter's Partition Problem

// You are given an array `arr[]` of size `n`, where each element represents the length of a board that needs to be painted.
// You are also given an integer `w`, representing the number of painters available.
// Each painter can paint only **contiguous boards**, and each board must be assigned to exactly one painter. Assume that every painter paints at the same rate, so the time taken by a painter is proportional to the total length of the boards assigned to them.
// Your task is to **minimize the maximum time required to paint all the boards** by distributing the boards among the `w` painters.
// ### Input
// - An integer `n`, the number of boards.
// - An array `arr[]` of `n` positive integers representing board lengths.
// - An integer `w`, the number of painters.
// ### Output
// Return the minimum possible maximum workload assigned to any painter.
// ### Example
// **Input:
// n = 4
// arr = [10, 20, 30, 40]
// w = 2
// Output:
// 60

// **Explanation:**
// Assign the first three boards to Painter 1 and the last board to Painter 2:
// - Painter 1: `10 + 20 + 30 = 60`
// - Painter 2: `40`
// The maximum workload is `60`, which is the minimum possible.
// ### Constraints
// - `1 <= n`
// - `1 <= arr[i]`
// - `1 <= w <= n`

#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int w){
    int start = 0, end = 0, mid;
    int time;
    // w - no. of workers
    for(int i=0; i<n; i++){
        start = max(start, arr[i]);     // it return between start and arr[i]
        end += arr[i];      // sum of array
    }
    while(start <= end){
        mid = start + (end - start)/2;   // mid = start + (end-start)/2; // >> both are same

        int work=0, workers = 1;
        for(int i=0; i<n; i++){
            work += arr[i];
            if(work > mid){
                workers++;
                work = arr[i];
            }
        }
        if(workers <= w){
            time = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    } 
    return time;
}
int main(){
    int arr[100];
    int n, w; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the no. of workers : ";
    cin>>w;

    cout<<"Minimum Time to paint the wall : "<<Binary_Search(arr, n, w);

    return 0;
}