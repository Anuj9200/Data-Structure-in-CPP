// TIME COMPLEXITY :: O(n^2)
#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int curr_sum = 0;
        for (int j = i; j < n; j++) {
            curr_sum += arr[j];  // extend subarray
            max_sum = max(max_sum, curr_sum);
        }
    }
    return max_sum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Largest sum of subarray = " << maxSubarraySum(arr, n);
    return 0;
}
