#include <iostream>
#include<vector>
using namespace std;

string Sort_vowel_in_string(string s){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0; i<s.size(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            upper[s[i]-'A']++;
            s[i] = '#';
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            lower[s[i]-'a']++;
            s[i] = '#';
        }
    }

    string vowels;
    for(int i=0; i<26; i++){
        char a = 'A' + i;
        while(upper[i]){
            vowels += a;
            upper[i]--;
        }
    }
    for(int i=0; i<26; i++){
        char a = 'a' + i;
        while(lower[i]){
            vowels += a;
            lower[i]--;
        }
    }

    int j=0;
    for(int i=0; j<vowels.size(); i++){
        if(s[i]=='#'){
            s[i] = vowels[j];
            j++;
        }
    }

    return s;

}

int main(){
    string str = "lEetcOde";

    cout<<Sort_vowel_in_string(str);

    return 0;
}