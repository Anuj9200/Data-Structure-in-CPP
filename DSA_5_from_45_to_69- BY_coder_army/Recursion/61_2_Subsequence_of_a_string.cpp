#include <iostream>
#include<vector>
using namespace std;

void subsequence(string &s, int idx, int n, vector<string>&ans, string &temp){
    if(n == idx){
        ans.push_back(temp);
        return;
    }

    // Not Included
    subsequence(s, idx+1, n, ans, temp);

    // Included
    temp.push_back(s[idx]);
    subsequence(s, idx+1, n, ans, temp);
    temp.pop_back();
}

int main(){
    string s = "abc";

    vector<string>ans;
    string temp;
    
    subsequence(s, 0, s.size(), ans, temp);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    


    return 0;
}