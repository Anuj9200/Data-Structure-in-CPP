// Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it

#include <iostream>
#include<vector>
using namespace std;

void lps_find(vector<int>&lps, string s){
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
}

// KMP ALGORITHM
int string_match(string temp, string b){
    vector<int>lps(b.size(), 0);
    lps_find(lps, b);

    int first = 0, second = 0;
    while(second < b.size() && first < temp.size()){
        if(b[second] == temp[first]){
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

        if(second == b.size())
            return 1;
    }

    return 0;
}

int repeated_string_match(string a , string b){
    if(a==b){
        return 1;
    }
    int repeat = 1;
    string temp = a;

    while(temp.size() < b.size()){
        temp += a;
        repeat++;
    }

    if(string_match(temp, b) == 1){
        return repeat;
    }

    temp += a;

    if(string_match(temp, b) == 1){
        return repeat+1;   // +1 kyuki ek baar or a add kiya hai
    }

    return -1;
}

int main(){
    string a = "abcd";
    string b = "abcd";

    int idx = repeated_string_match(a, b);

    if(idx >= 0){
        cout<<"a is repeated "<<idx<<" times";
    }
    else{
        cout<<idx;

    }
    
    return 0;
}