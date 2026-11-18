#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {1, 2, 21 ,4 ,5, 6, 7, 8, 9, 10, 1, 12};
    int sum, idx=-1, max_sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0; i<3; i++){
        sum = 0;
        for(int j=0; j<4; j++){
            sum += arr[i][j];
        }
        cout<<"Sum is "<<sum<<" ";
        if(sum > max_sum){
            max_sum = sum;
            idx = i;
        }
    }

    cout<<idx;
    
    return 0;
}