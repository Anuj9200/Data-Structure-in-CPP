#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector Declaration 
    vector<int>arr;
    
    // Initialize value in vector
    vector<int>arr(5);  // vector of size 5 with garbage value

    vector<int>arr1(5, 2);   // vector of size 5 and arr1 = 2, 2, 2, 2, 2

    vector<int>arr2;
    arr2.push_back(4);      // vector of size=1, capacity=1 and arr2 = 4
    arr2.push_back(8);      // vector of size=2, capacity=2 and arr2 = 4, 8
    arr2.push_back(3);      // vector of size=3, capacity=4 and arr2 = 4, 8, 3
    arr2.push_back(6);      // vector of size=4, capacity=4 and arr2 = 4, 8, 3, 6
    arr2.push_back(10);     // vector of size=5, capacity=10 and arr2 = 4, 8, 3, 6, 10
    

    vector<int>arr3 = {1,2,3,4,5};      // vector of size=5, capacity=10 and arr2 = 1, 2, 3, 4, 5


    vector<int>arr4(5);     
    for(int i=0; i<5; i++){
        cin>>arr4[i];       // values taking by user
    }

    int n;
    cout<<"Enter n : ";
    cin>>n;             // size of the vector also taking input by user
    vector<int>arr4(n);     
    for(int i=0; i<5; i++){
        cin>>arr4[i];       // values of vector taking user input
    }

    return 0;
}