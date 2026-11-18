#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr = {1,3,5,8,10};
    
    cout<<binary_search(arr.begin(), arr.end(), 13)<<endl;  // return 0 if not present , 1 if present 

    cout<<find(arr.begin(), arr.end(), 5) - arr.begin();   // give address if present otherwise return addess of arr.end()
    //**  substacting by arr.begin() is neccesary beacuse find() donot return any value it is like a pointer so we substracting this from 0 to get the distance means address

    cout<<endl;

    return 0;
}