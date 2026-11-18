#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<int>arr = {3, 2, 5, 3, 1, 2, 3, 7};
    int n = arr.size();

    for(int i=0; i<n; i++){
        arr[i]--;
    }

    for(int i=0; i<n; i++){
        arr[arr[i]%n] += n;
    }

    for(int i=0; i<n; i++){
            cout<<"Occurance of "<< i+1<<" is : "<<arr[i]/n<<endl;
    }
    
    return 0;
}