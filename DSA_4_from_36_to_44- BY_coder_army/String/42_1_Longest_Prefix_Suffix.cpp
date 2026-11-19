#include <iostream>
#include<vector>
using namespace std;

int Longest_Prefix_Suffix(string s){
    vector<int>lps(s.size(),0);  // lps : longest prefix suffix
    int pre=0, suf=1;

    while(suf < s.size()){
        if(s[pre] == s[suf]){
            lps[suf] = pre+1;
            pre++, suf++;
        }
        else{
            if(pre == 0){
                lps[suf] = 0; 
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }

    return lps[s.size()-1];

}

int main(){
    // string s = "abab";
    string s = "ABCABDABCABCABD";

    cout<<Longest_Prefix_Suffix(s);

    return 0;
}