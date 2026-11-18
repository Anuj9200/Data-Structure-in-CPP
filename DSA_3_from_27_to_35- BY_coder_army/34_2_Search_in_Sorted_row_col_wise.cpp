#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    // create 2d vector
    vector<vector<int>> matrix(4, vector<int>(4));
    int n = matrix.size(), m = matrix[0].size(), x;

    cout<<"Enter value in 4 X 4 Matrix :: ";
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Enter value of x to Search :: ";
    cin>>x;

    int i = 0, j = m-1;
    while(i<n && j>=0){
        if(matrix[i][j] == x){
            cout<<"Element found at index : "<<i<<" "<<j;
            return 0;
        }
        else if(matrix[i][j] < x){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<"Element Not Found";

    return 0;
}