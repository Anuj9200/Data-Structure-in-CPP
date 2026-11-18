// TIME COMPLEXITY :: O(n)
#include <iostream>
using namespace std;

bool Divide_Array(int arr[], int n){
    int totalsum = 0;
    for(int i=0; i<n; i++){
        totalsum += arr[i];
    }

    int prefixsum = 0;

    for(int i=0; i<n-1; i++){
        prefixsum += arr[i];
        if(prefixsum*2== totalsum) return 1;
    }

    return 0;
}

int main(){
    int n, arr[100];
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(Divide_Array(arr,n)){
        cout<<"Array can be divided ";
    }
    else{
        cout<<"Array cannot be divided";
    }

    return 0;
}
