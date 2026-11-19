// Minimum Characters to be added at front to make string palindrome

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int make_palindrome(string s){
    string rev = s;
    reverse(rev.begin(), rev.end());
    int size = s.size();
    s += '$';   // seperator lgao takki wo lps poore ka n nikale
    s += rev;   // reverse

    int n = s.size();  // new size after adding reverse string
    vector<int>lps(s.size(),0);  // lps : longest prefix suffix
    int pre=0, suf=1;

    while(suf < s.size()){
        if(s[pre] == s[suf]){
            lps[suf] = pre+1;
            pre++, suf++;
        }
        else{
            if(pre == 0){
                lps[suf] = 0;   // iski jrurt nhi nhi hai kyuki pehle se he 0 present hai hr index pe
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    } 

    return size - lps[n-1];

}

int main(){
    // string s = "aaaotcaakr";
    string s = "abcabdabcabcabd";

    cout<<make_palindrome(s);

    return 0;
}
