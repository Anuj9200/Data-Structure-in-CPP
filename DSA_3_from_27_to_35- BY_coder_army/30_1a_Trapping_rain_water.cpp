// Time Complexity = O(2n) = O(n) AND  Space Complexity = O(1)
#include <iostream>
using namespace std;

int func(int height[], int n){
    int left_max = 0, right_max = 0, index = 0, water = 0;
    int max_height = height[0];

    for(int i=1; i<n; i++){
        if(height[i]>max_height){
            max_height = height[i];
            index = i;
        }
    }
    for(int i=0; i<index; i++){
        if(left_max > height[i]){
            water += left_max - height[i];
        }
        else{
            left_max = height[i];
        }
    }
    for(int i=n-1; i>index; i--){
        if(right_max > height[i]){
            water += right_max - height[i];
        } 
        else{
            right_max = height[i];
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