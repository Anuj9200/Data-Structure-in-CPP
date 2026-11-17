// You are given an array arr[] of size n, where each element represents the number of pages in a book. You are also given an integer k, representing the number of students.
// Your task is to allocate all the books among the k students such that the maximum number of pages assigned to any student is minimized.
// Rules
// Each student must receive at least one book.
// Each book must be allocated to exactly one student.
// Books must be allocated in contiguous order; students cannot receive randomly selected books.
// The objective is to minimize the maximum number of pages allocated to any student.
// If the allocation is impossible, return -1.

// Input
// An integer n, representing the number of books.
// An array arr[] of n positive integers representing the pages in each book.
// An integer k, representing the number of students.
// Output
// Return the minimum possible maximum number of pages allocated to any student.

// Example
// Input:
// n = 4
// arr = [12, 34, 67, 90]
// k = 2
// Output:
// 113

// Explanation:
// An optimal allocation is:
// Student 1: Books with 12 + 34 + 67 = 113 pages.
// Student 2: Book with 90 pages.
// The maximum number of pages assigned to a student is 113, which is the minimum possible.
// Constraints
// 1 <= n
// 1 <= arr[i]
// 1 <= k

#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int k){
    int start = 0, end = 0, mid;
    int ans = -1;
    // k -> means Books should be distributed among k no of student
    for(int i=0; i<n; i++){
        start = max(start, arr[i]);     // it return between start and arr[i]
        end += arr[i];      // sum of array
    }
    while(start <= end){
        mid = start + (end - start)/2;   // mid = start + (end-start)/2; // >> both are same

        int pages=0, student = 1;
        for(int i=0; i<n; i++){
            pages += arr[i];
            if(pages > mid){
                student++;
                pages = arr[i];
            }
        }
        if(student <= k){
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
    int n, k;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter elements of an array :: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the k : ";
    cin>>k;

    cout<<"Minimum number of pages is : "<<Binary_Search(arr, n, k);

    return 0;
}