#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(4, vector<int>(4));
    int row = matrix.size(), col = matrix[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
    
    // Transpose the Matrix
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j<col; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Reverse all rows
    for(int i=0; i<row; i++){
        for(int j=0; j<col/2; j++){
            swap(matrix[i][j], matrix[i][col-j-1]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

} 