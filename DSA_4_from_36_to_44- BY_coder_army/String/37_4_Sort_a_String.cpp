#include <iostream>
#include<vector>
using namespace std;

string sort_String(string &sentence){
    vector<int>alpha(26,0);

    for(int i=0; i<sentence.size(); i++){
        int idx = sentence[i]-'a';
        alpha[idx]++;
    } 

    sentence = "";
    for(int i=0; i<alpha.size(); i++){
        char c = 'a' + i;
        
        while(alpha[i]){
            sentence += c;
            alpha[i]--;
        }
    }
    return sentence;
}

int main(){
    string str = "abdcuvfeghijklmnopqrstwxyz";

    // cout<<sort_String(str);
    cout<<sort_String(str);

    return 0;
}