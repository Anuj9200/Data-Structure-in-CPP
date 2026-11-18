#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(3, vector<int>(3));
    int n = matrix.size(), m = matrix[0].size(), x;

    cout<<"Enter value in 3 X 3 Matrix :: ";
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Enter value of x to Search :: ";
    cin>>x;

    int start=0, end=n*m-1;
    while(start<=end){
        int mid = (start+end)/2;
        int row_idx = mid/m;
        int col_idx = mid%m;

        if(matrix[row_idx][col_idx] == x){
            cout<<"Element found at matrix of index "<<row_idx<<" "<<col_idx;
            return 0;
        }
        else if(matrix[row_idx][col_idx] < x){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

    return 0;
}