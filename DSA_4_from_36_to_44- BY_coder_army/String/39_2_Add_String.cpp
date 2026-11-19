#include <iostream>
#include<typeinfo>
using namespace std;
int main(){
    string s = "4";
    char a = '0';

    cout<<typeid(s[0]-a).name();

    return 0;
}