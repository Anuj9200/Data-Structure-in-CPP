#include <iostream>
using namespace std;

int count_vowel(string str, int idx){
    if(idx == str.size())
        return 0;

    if(str[idx] == 'a' || str[idx] == 'e' || str[idx] == 'i' || str[idx] == 'o' || str[idx] == 'u'){
        return 1 + count_vowel(str, idx+1);
    }
    else{
        return count_vowel(str, idx+1);
    }

}
int main(){  
    string str = "naldqaoidman";

    cout<<count_vowel(str, 0);

    return 0;
}