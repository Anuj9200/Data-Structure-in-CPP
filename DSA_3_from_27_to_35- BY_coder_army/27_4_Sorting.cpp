#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr = {4,2,3,9,5};
   
    // Sort in Increasing Order ::
    sort(arr.begin(), arr.end());   // sort need <algorithm> library
    for(auto i : arr){   
        cout<<i<<" ";
    }
    cout<<endl;

    // Sort in Decreasing Order ::
    sort(arr.rbegin(), arr.rend());
    // sort(arr.begin(), arr.end(), greater<int>());   
    for(auto i : arr){   
        cout<<i<<" ";
    }
    return 0;
}