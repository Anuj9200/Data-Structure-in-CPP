// TIME COMPLEXITY :: O(n^3)
#include <iostream>
using namespace std;

void printAllSubarrays(int arr[], int n){
    // Start index
    for(int i=0; i<n; i++){
        // End index
        for(int j=i; j<n; j++){
            // Print subarray arr[i...j]
            cout << "[ ";
            for(int k=i; k<=j; k++){
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main(){
    int n, arr[100];
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "\nAll Subarrays are:\n";
    printAllSubarrays(arr, n);
    
    return 0;
}



