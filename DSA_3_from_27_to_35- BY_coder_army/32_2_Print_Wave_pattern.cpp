#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(4, vector<int>(4));

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cin>>matrix[i][j];
        }
    }


    for(int j=0; j<matrix[0].size(); j++){
        if(j%2 == 0){
            for(int i=0; i<matrix.size(); i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i=matrix.size()-1; i>=0; i--){
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}