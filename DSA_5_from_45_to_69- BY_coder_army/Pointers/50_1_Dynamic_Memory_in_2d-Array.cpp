#include <iostream>
using namespace std;
int main(){
    // Array create krna hai, jo address store krega
    int n, m;
    cout<<"Input rows and cols : ";
    cin>>n>>m;

    int **ptr = new int *[n];

    for(int i=0; i<n; i++){
        ptr[i] = new int[m];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ptr[i][j];
        }
    }

    //print Value
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    // release the memory, heap mein
    for(int i=0; i<n; i++){
        delete[] ptr[i];
    }

    delete[] ptr;


    return 0;
}






































