#include <iostream>
#include <vector>
using namespace std;

void rightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // handle k > n

    // Step 1: Reverse whole array
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }

    // Step 2: Reverse first k elements
    for(int i = 0, j = k - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }

    // Step 3: Reverse remaining n-k elements
    for(int i = k, j = n - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;

    rightRotate(arr, k);

    cout << "Right Rotated Array: ";
    for(int x : arr)
        cout << x << " ";

    return 0;
}
