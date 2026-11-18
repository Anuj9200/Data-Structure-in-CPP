// TIME COMPLEXITY :: O(n)
#include <iostream>
using namespace std;

int largestSubarraySum(int arr[], int n) {
    int maxsum = arr[0];
    int cursum = arr[0];
    for(int i=1; i<n; i++){
        cursum = max(arr[i], cursum + arr[i]);
        maxsum = max(maxsum, cursum);
    }
    return maxsum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Largest subarray sum = " << largestSubarraySum(arr, n);
    return 0;
}
