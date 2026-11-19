#include <iostream>
using namespace std;
int main(){
    string s, str;

    getline(cin, s);   // ek word he lega input , space ke baad ka nhi lega
    cout<<s<<endl;

    cout<<"Input str : ";

    getline(cin, str);  // ye Space bhi lega input mein
    cout<<str<<endl;

    cout<<endl;
    cout<<str.length()<<" ";
    cout<<str.size()<<endl;

    string s1 = s + str;
    cout<<s1<<" ";
    cout<<s1.length();

    return 0;
}