#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> max_subArray(int arr[], int n){

    vector<int> left_idx = {0, 2};
    vector<int> right_idx = {2, 3};
    vector<int> result;

    for(int i = 0; i < left_idx.size(); i++){
        int current_sum = 0;
        int max_sum = INT_MIN;

        for(int j = left_idx[i]; j <= right_idx[i]; j++){
            current_sum = max(arr[j], current_sum + arr[j]);
            max_sum = max(max_sum, current_sum);
        }
        result.push_back(max_sum);
    }
    return result;
}

int main(){

    int arr[6] = {2, 8, -6, 4};

    vector<int> ans = max_subArray(arr, 4);

    cout << "[ ";
    for(int x : ans){
        cout << x << " ";
    }
    cout << "]";

    return 0;
}
