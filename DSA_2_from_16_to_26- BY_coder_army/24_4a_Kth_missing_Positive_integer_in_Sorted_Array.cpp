// Without using bubble sorting

#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0;
    int current = 1;  // Start from 1
    int index = 0;    // Pointer in arr

    while (true) {
        if (index < n && arr[index] == current){
            // Current number is present in array, skip it
            index++;
        } 
        else{
            // Current number is missing
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
}

int main() {
    int n, arr[100], k;
    
    cout << "Enter n : ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k: ";
    cin >> k;

    cout << k << "th missing element is: " << findKthMissing(arr, n, k) << endl;

    return 0;
}
