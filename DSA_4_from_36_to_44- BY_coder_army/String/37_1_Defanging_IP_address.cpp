#include <iostream>
using namespace std;
int main(){
    string address = "192.125.101";
    int idx=0;
    string ans;
    
    while(idx < address.size()){
        if(address[idx] == '.'){
            ans = ans + "[.]";
        }
        else{
            ans = ans + address[idx];
        }
        idx++;
    }

    cout<<"Address after defanged :: "<<ans;

    return 0;
}