#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<int>arr = {4, 3, 2, 1, 2, 7, 6};
    int n = arr.size();

    for(int i=0; i<n; i++){
        arr[i]--;
    }

    for(int i=0; i<n; i++){
        arr[arr[i]%n] += n;
    }

    for(int i=0; i<n; i++){
        if(arr[i]/n == 0){
            cout<<"Missing number is : "<<i+1<<endl;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]/n == 2){
            cout<<"Repeated number is : "<<i+1<<endl;
            break;
        }
    }

    return 0;
}