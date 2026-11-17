#include <iostream>
#include<limits.h>
using namespace std;

int main(){
    int n, arr[100], max = INT_MIN, smax = INT_MIN;

    cout<<"Enter n : ";
    cin>>n;
    cout<<"Input the Elements of array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            smax = arr[i];
        }
    }

    // This will also give second max equal to max (if 2 no. is present in array)
    // for(int i=0; i<n; i++){
    //     if(arr[i]>max){
    //         smax = max;
    //         max = arr[i];
    //     }
    //     else if(arr[i]>smax){
    //         smax = arr[i];
    //     }
    // }


    cout<<"Smax : "<<smax<<endl;
    cout<<"max : "<<max;
    
    return 0;
}























