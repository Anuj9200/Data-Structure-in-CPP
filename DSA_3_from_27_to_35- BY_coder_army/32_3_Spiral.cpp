#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(4, vector<int>(4));
    vector<vector<int>> ans(4, vector<int>(4));
    int row = matrix.size(), col = matrix[0].size();

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }

    int top=0, right=col-1, bottom=row-1, left=0;
    while(top <= bottom && left <= right){
        // print top


        // print right


        // print bottom;

        // print left;


    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>ans[i][j];
        }
    }
    
}