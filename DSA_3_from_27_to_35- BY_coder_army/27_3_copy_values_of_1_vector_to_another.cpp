#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {4,2,3,9,5};

    vector<int>arr1;

    arr1 = arr;  // arr1 copy values of arr

    // for(int i=0; i<arr1.size(); i++){
    //     cout<<arr1[i]<<" ";
    // }
    for(auto i : arr1){   // other way to print element of vector
        cout<<i<<" ";
    }

    return 0;
}