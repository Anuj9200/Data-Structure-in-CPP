#include <iostream>
#include<vector>
using namespace std;

void subsequence(int arr[], int idx, int n, vector<vector<int> >&ans, vector<int>&temp){
    if(n == idx){
        ans.push_back(temp);
        return ;
    }

    // Not Included
    subsequence(arr, idx+1, n, ans, temp);

    // Included
    temp.push_back(arr[idx]);
    subsequence(arr, idx+1, n, ans, temp);
    temp.pop_back();

}

int main(){
    int arr[] = {1, 2, 3};

    vector<vector<int> >ans;
    vector<int>temp;
    
    subsequence(arr, 0, 3, ans, temp);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}