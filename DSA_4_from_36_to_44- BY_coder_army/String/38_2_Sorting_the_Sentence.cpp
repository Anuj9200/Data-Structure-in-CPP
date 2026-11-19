#include <iostream>
#include<vector>
using namespace std;

string Sorting_sentence(string s){
    vector<string>ans(10);
    string temp;
    int count=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            int pos = temp[temp.size()-1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        }
        else{
            temp += s[i];
        }
    }

    // for taking last pos of string and store the word
    int pos = temp[temp.size()-1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    temp.clear();
    count++;

    for(int i=1; i<=count; i++){
        temp += ans[i];
        temp += ' ';
    }
    temp.pop_back();

    return temp;
}

int main(){
    string str = "is2 sentence4 This1 a3";

    cout<<Sorting_sentence(str);

    return 0;
}