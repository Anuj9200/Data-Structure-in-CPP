#include <iostream>
#include <vector>
using namespace std;
int main(){
    //// 1  ::

    vector<int>arr;
    // Insert element at specific position ::
    arr.insert(arr.begin(), 1);
    arr.insert(arr.begin()+1, 5);
    arr.insert(arr.begin()+2, 7);
    arr.insert(arr.begin()+1, 9);  // if value insert at same index so previous element sifted right
    arr.insert(arr.begin()+2, 17);
    arr.insert(arr.end(), 3);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";       
    }
    cout<<endl;

    // erase element from specific position ::
    arr.erase(arr.begin()+2);
    arr.erase(arr.begin()+1);
    arr.erase(arr.begin()+2);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";       
    }

    // Erase all element of the vector ::

    arr.clear();  // means size will be 0 but capacity will unchanged
    cout<<"\n"<<arr.size();
    cout<<"\n"<<arr.capacity();


    // // 2  ::

    // vector<int>arr3 = {1,2,3,4,5};

    // // Insert element at specific position ::

    // arr3.insert(arr3.begin()+2, 9);
    
    // for(int i=0; i<arr3.size(); i++){
    //     cout<<arr3[i]<<" ";       
    // }
    // cout<<endl;

    // // erase element from specific position ::

    // arr3.erase(arr3.begin()+3);
    // arr3.erase(arr3.begin()+3);
    // for(int i=0; i<arr3.size(); i++){
    //     cout<<arr3[i]<<" ";       
    // }
    // cout<<"\n"<<arr3.size();
    // cout<<"\n"<<arr3.capacity();  // capacity will be 10 because, previously arr capacity is 5 then it get double -> 10

    return 0;
}