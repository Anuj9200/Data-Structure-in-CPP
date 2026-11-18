#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(4, vector<int>(4));
    int row = matrix.size(), col = matrix[0].size();
    int n = 180/90;

    cout<<"Enter value in 4 X 4 Matrix :: ";
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cin>>matrix[i][j];
        }
    }


    // Reverse by columns
    for(int i=0; i<row; i++){
        for(int j=0; j<col/2; j++){
            swap(matrix[j][i], matrix[col-j-1][i]);
        }
    }
    // Reverse by rows
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