#include <iostream>
#include<vector>
using namespace std;

int Longest_Substring(string s){
    vector<int>count(256,0);

    int first = 0, second = 0, lenmax = 0;
    while(second < s.size()){
        while(count[s[second]]){
            count[s[first]] = 0;
            first++;
        }

        count[s[second]] = 1;

        lenmax = max(lenmax, second-first+1);
        second++;
    } 
    return lenmax;
}

int main(){
    string str = "AABdcBBCBA";

    cout<<Longest_Substring(str);

    return 0;
}