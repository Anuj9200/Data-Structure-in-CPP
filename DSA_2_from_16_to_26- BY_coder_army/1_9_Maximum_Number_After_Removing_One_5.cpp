#include <iostream>
#include <climits>
using namespace std;

int remove_one_5AndGetMaximum(int N) {
    // =========================
    // POSITIVE NUMBER
    // =========================
    if (N > 0) {

        int n = N;
        int rem = 0;
        int last = 0;
        int temp = 1;
        int first = 0;
        int ans = INT_MIN;

        while (n > 0) {
            rem = n % 10;
            if (rem == 5) {
                n = n / 10;
                // Current 5 ko remove kiya
                first = n * temp + last;
                // Maximum candidate
                if (first > ans) {
                    ans = first;
                }
                // Current 5 ko retain kiya
                last = rem * temp + last;
                temp = temp * 10;
            }
            else {
                last = rem * temp + last;
                temp = temp * 10;
                n = n / 10;
            }
        }
        return ans;
    }

    // =========================
    // NEGATIVE NUMBER
    // =========================
    else if (N < 0) {
        int n = -N;     // Magnitude positive bana diya
        int rem = 0;
        int last = 0;
        int temp = 1;
        int first = 0;
        int ans = INT_MAX;

        while (n > 0) {
            rem = n % 10;
            if (rem == 5) {
                n = n / 10;
                // Current 5 ko remove kiya
                first = n * temp + last;
                // Negative number ke liye
                // minimum magnitude chahiye
                if (first < ans) {
                    ans = first;
                }
                // Current 5 ko retain kiya
                last = rem * temp + last;
                temp = temp * 10;
            }
            else {
                last = rem * temp + last;
                temp = temp * 10;
                n = n / 10;
            }
        }
        return -ans;
    }

    // =========================
    // N == 0
    // =========================
    else {
        return 0;
    }
}


int main() {

    int N;
    cout<<"Enter N : ";
    cin >> N;

    cout << remove_one_5AndGetMaximum(N);

    return 0;
}