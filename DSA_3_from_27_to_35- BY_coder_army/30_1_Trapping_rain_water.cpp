// Time Complexity = O(3n) = O(n) AND  Space Complexity = O(2n) = O(n)
#include <iostream>
using namespace std;

int func(int height[], int n){
    int left_max[n], right_max[n];

    left_max[0] = 0;
    for(int i=1; i<n; i++){
        left_max[i] = max(left_max[i-1], height[i-1]);
    }
    right_max[n-1] = 0;
    for(int i=n-2; i>=0; i--){
        right_max[i] = max(right_max[i+1], height[i+1]);
    }
    
    int water = 0;
    for(int i=0; i<n; i++){
        int mini_height = min(left_max[i], right_max[i]);
        if(mini_height > height[i]){
            water += mini_height - height[i];
        }
    } 
    return water;
}
int main(){
    int arr[10], n;
    cout<<"Enter n :";
    cin>>n;

    cout<<"Enter element of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The total amout of water that is store : "<<func(arr, n);

    return 0;
}