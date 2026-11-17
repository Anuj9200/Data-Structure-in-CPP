// Koko has n piles of bananas, where arr[i] represents the number of bananas in the i-th pile.
// Koko has h hours to eat all the bananas. She chooses an integer eating speed k, meaning she eats k bananas per hour.
// Each hour, Koko chooses one pile and eats up to k bananas from it.
// If a pile contains fewer than k bananas, she finishes that pile and cannot use the remaining time in that hour to eat from another pile.
// Koko wants to finish all the bananas within h hours.
// Find the minimum integer eating speed k that allows Koko to finish all the bananas within h hours.

// Example
// Input:
// arr = [3, 6, 7, 11]
// h = 8
// Output:
// 4

// Explanation:
// At a speed of 4 bananas per hour:
// Pile 1: ceil(3/4) = 1 hour
// Pile 2: ceil(6/4) = 2 hours
// Pile 3: ceil(7/4) = 2 hours
// Pile 4: ceil(11/4) = 3 hours
// Total time = 1 + 2 + 2 + 3 = 8 hours.
// Therefore, the minimum eating speed is 4 bananas per hour.

// Constraints
// 1 <= n <= 10⁴
// 1 <= arr[i] <= 10⁹
// n <= h <= 10⁹

#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int h){
    int start=0, end = 0, mid=0, sum=0;
    int ans=-1;

    for(int i=0; i<n; i++){
        end = max(end, arr[i]);
        sum += arr[i];
    }    
    start = sum/h;
    
    while(start <= end){
        mid = (start + end) / 2;   
        int hours=0;
        for(int i=0; i<n; i++){
            hours += arr[i]/mid;
            if(arr[i]%mid){
                hours++;
            }
        }
        if(hours <= h){
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
    int n, h; 
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the time : ";
    cin>>h;

    cout<<"Minimum banana she should  eat per hour : "<<Binary_Search(arr, n, h);

    return 0;
}