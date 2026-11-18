// TIME COMPLEXITY :: O(n^2)
#include <iostream>
using namespace std;

int Divide_Array(int arr[], int n){
    // Start index
    for(int i=0; i<n-1; i++){
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<=i; j++)
            sum1 += arr[j];
        for(int j=i+1; j<n; j++)
            sum2 += arr[j];

        if(sum1 == sum2) return 1;
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
