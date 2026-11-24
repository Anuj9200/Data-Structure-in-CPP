#include <iostream>
using namespace std;

void low_to_upp(string &str, int idx){
    if(idx == str.size())
        return;

    str[idx] = 'A' + str[idx] - 'a';
    low_to_upp(str, idx+1);
}

int main(){
    string str = "mnamait";
    low_to_upp(str,0);
    cout<<"Reverse String : "<<str;

    return 0; 
}