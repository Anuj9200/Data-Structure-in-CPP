#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {1, 2, 21 ,4 ,5, 6, 7, 8, 9};
    int sum=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3/2; j++){
            arr[i][j] = arr[i][j] + arr[i][3-j-1];
            arr[i][3-j-1] = arr[i][j] - arr[i][3-j-1];
            arr[i][j] = arr[i][j] - arr[i][3-j-1];

        }
    }

    cout <<"Array After Reverse all rows Element :: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}