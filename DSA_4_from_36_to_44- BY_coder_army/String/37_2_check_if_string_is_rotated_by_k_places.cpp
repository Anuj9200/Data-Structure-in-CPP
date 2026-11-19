#include <iostream>
using namespace std;

void rotate_clock_wise(string &s){
    char a = s[s.size()-1];   // store string last character
    int idx = s.size()-2;
    while(idx >= 0){
        s[idx+1] = s[idx];
        idx--;
    }
    s[0] = a;
}

void rotate_anticlock_wise(string &s){
    char a = s[0];   // store string last character
    int idx = 1;
    while(idx < s.size()){
        s[idx-1] = s[idx];
        idx++;
    }
    s[s.size()-1] = a;
}

bool check_rotated(string str1, string str2, int k){

    if(str1.size() != str2.size())
        return 0;

    string clockwise = str1, anticlockwise = str1;

    int n=k;
    while(n){
        rotate_clock_wise(clockwise);
        n--;
    }
    if(clockwise == str2){
        return 1;
    }

    n=k;
    while(n){
        rotate_anticlock_wise(anticlockwise);
        n--;
    }
    if(anticlockwise == str2){
        return 1;
    }

    return 0;

}

int main(){
    string str1 = "amazon";
    string str2 = "azonam";
    // string str2;
    // cout<<"Enter str2 : ";
    // cin>>str2;
    int k;
    cout<<"Enter k : ";
    cin>>k;

    if(check_rotated(str1, str2, k)){
        cout<<"Yes string is rotated by k places";
    }
    else{
        cout<<"No";

    }
    

    return 0;
}