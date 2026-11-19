// return the index of the first occurrence of str2 in str1

#include <iostream>
#include<vector>
using namespace std;

int String_match(string haystack, string needle){

    vector<int>lps(needle.size(), 0);
    int pre=0, suf=1;

    // making lps for needle string
    while(suf < needle.size()){
        if(needle[pre] == needle[suf]){
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

    // KMP ALGORITHM
    int first = 0, second = 0;
    while(second < needle.size() && first < haystack.size()){
        if(needle[second] == haystack[first]){
            second++, first++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second = lps[second-1];
            }
        }

        if(second == needle.size())
            return first-second;
    }

    return -1;
}

int main(){
    string str1 = "namespace";
    string str2 = "espace";

    int idx = String_match(str1, str2);

    if(idx >= 0){
        cout<<"Yes and first occurance is "<<idx;
    }
    else{
        cout<<"Not Match";

    }
    
    return 0;
}