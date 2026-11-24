#include <iostream>
using namespace std;

void Rev_string(string &str, int start, int end){
    if(start >= end)
        return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    Rev_string(str, start+1, end-1);
}
int main(){
    string str = "namait";
    Rev_string(str,0,str.size()-1);
    cout<<"Reverse String : "<<str;

    return 0; 
}