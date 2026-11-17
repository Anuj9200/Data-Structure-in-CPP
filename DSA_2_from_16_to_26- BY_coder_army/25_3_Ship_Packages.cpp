// You are given an array arr[] of size n, where each element represents the weight of a package. The packages must be shipped in the given order.
// You are also given an integer days, representing the maximum number of days available to ship all packages.
// Your task is to find the minimum ship capacity required to ship all packages within the given number of days.

// Rules
// Packages must be shipped in the given order.
// The total weight shipped on any day must not exceed the ship's capacity.
// At least one package must be shipped each day when packages remain.
// The ship must transport all packages within days days.

// Input
// An integer n, representing the number of packages.
// An array arr[] of n positive integers representing package weights.
// An integer days, representing the maximum number of days available.

// Output
// Return the minimum ship capacity required to deliver all packages within the given number of days.

// Example
// Input:
// n = 5
// arr = [1, 2, 3, 4, 5]
// days = 3
// Output:
// 6

// Explanation:
// With a ship capacity of 6, the packages can be shipped as follows:
// Day 1: 1 + 2 + 3 = 6
// Day 2: 4 + 5 = 9

// This exceeds the capacity, so this allocation is invalid.
// An optimal allocation with capacity 6 is:
// Day 1: 1 + 2 + 3 = 6
// Day 2: 4
// Day 3: 5
// All packages are shipped within 3 days, and the minimum possible capacity is 6.
// Constraints
// 1 <= n
// 1 <= arr[i]
// 1 <= days <= n

#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int days){
    int start = 0, end = 0, mid;
    int ans=0;
    // m -> means no. of books
    for(int i=0; i<n; i++){
        start = max(start, arr[i]);     // it return between start and arr[i]
        end += arr[i];      // sum of array
    }
    while(start <= end){
        mid = start + (end - start)/2;   // mid = start + (end-start)/2; // >> both are same
        
        int weight=0, day = 1;
        for(int i=0; i<n; i++){
            weight += arr[i];
            if(weight > mid){
                day++;
                weight = arr[i];
            }
        }
        if(day <= days){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    } 
    return ans;
}
int main(){
    int arr[100];
    int n, days; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the days : ";
    cin>>days;

    cout<<"Minimum weight : "<<Binary_Search(arr, n, days);

    return 0;
}