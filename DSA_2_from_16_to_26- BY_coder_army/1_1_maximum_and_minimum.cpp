#include <iostream>
using namespace std;
int main(){
    int arr[5] = {4, 6, 11, 2, 8};
    int min = arr[0], max = arr[0]; // we can also use INT_MAX and INT_MIN
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"highest : "<<max<<endl;

    cout<<"Minimum : "<<min<<endl;

    cout<<sizeof(arr);
    
    return 0;
}