// You are given an array stall[] of size n, where each element represents the position of a stall along a straight line. You are also given an integer k, representing the number of cows to place in these stalls.
// Your task is to place the k cows in the stalls such that the minimum distance between any two cows is maximized.

// Rules
// Each stall can contain at most one cow.
// All cows must be placed in different stalls.
// The distance between any two adjacent cows in sorted stall order should be at least the chosen minimum distance.
// The goal is to maximize this minimum distance.

// Input
// An integer n, representing the number of stalls.
// An array stall[] of n integers representing stall positions.
// An integer k, representing the number of cows to place.

// Output
// Return the maximum possible minimum distance between any two cows.

// Example
// Input:
// n = 5
// stall = [1, 2, 8, 4, 9]
// k = 3
// Output:
// 3

// Explanation:
// First, sort the stall positions:
// [1, 2, 4, 8, 9]
// Place the cows at positions 1, 4, and 8.
// Distance between the first and second cows = 3
// Distance between the second and third cows = 4
// The minimum distance is 3, which is the maximum possible minimum distance.

// Constraints
// 2 <= n
// 2 <= k <= n
// Stall positions are distinct integers.

#include <iostream>
using namespace std;

int Binary_Search(int stall[], int n, int k){

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(stall[j]<stall[j-1]){
                swap(stall[j], stall[j-1]);
            }
            else break;
        }
    }    
    
    int start = stall[0], end = stall[n-1]-stall[0], mid;
    int ans = stall[0];     // for value of k=1 

    while(start <= end){
        mid = (start + end) / 2;   // mid = start + (end-start)/2; // >> both are same
        int count = 1, pos = stall[0];
        for(int i=1; i<n; i++){
            if(pos + mid <= stall[i]){
                count++; 
                pos = stall[i];
            }
        }
        if(count < k){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    } 
    return ans;
}
int main(){
    int arr[100];
    int n, k; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter distance of an stall :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the K : ";   // no. of cows
    cin>>k;

    cout<<"this Minimum distance between two of them is of maximum possible : "<<Binary_Search(arr, n, k);

    return 0;
}