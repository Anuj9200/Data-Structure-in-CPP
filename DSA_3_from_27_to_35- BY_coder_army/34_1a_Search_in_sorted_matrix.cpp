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

    for(int i=0; i<n; i++){
        if(matrix[i][0]<=x && matrix[i][m-1]>=x){
            int start=0, end=m-1;
            while(start<= end){
                int mid = (start+end)/2;
                if(matrix[i][mid] == x){
                    cout<<"Element found at matrix of index "<<i<<" "<<mid;
                    return 0;
                }
                else if(matrix[i][mid] < x){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
    }
    

    return 0;
}