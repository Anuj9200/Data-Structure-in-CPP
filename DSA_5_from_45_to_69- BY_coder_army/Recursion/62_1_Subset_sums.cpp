#include <iostream>
#include<vector>
using namespace std;

void Subset_sum(int arr[], int idx, int n, int sum, vector<int>&ans){
    if(n == idx){
        ans.push_back(sum);
        return;
    }

    // Not Included
    Subset_sum(arr, idx+1, n, sum, ans);

    // Included
    Subset_sum(arr, idx+1, n, sum+arr[idx], ans);

}

int main(){
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;
    int sum = 0;
     
    Subset_sum(arr, 0, 4, sum, ans);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}