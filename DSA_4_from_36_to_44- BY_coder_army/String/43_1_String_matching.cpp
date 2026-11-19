// return the index of the first occurrence of str2 in str1

#include <iostream>
using namespace std;

int String_match(string str1, string str2){

    int n = str1.size(), m = str2.size();

    for(int i=0; i<=n-m; i++){
        int first = i, second = 0;   // first for str1, second for str2

        while(second < m){
            if(str1[first] != str2[second]){
                break;   // break and check from new index
            }
            else{
                first++, second++;
            }
            if(second == m){
                return first-second;
            }
        }
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