#include <iostream>
using namespace std;
int main(){
    int num, pow,value;

    cout<<"Enter num : ";
    cin>>num;
    cout<<"Enter pow : ";
    cin>>pow;

    value = 1;

    for(int i=1; i<=pow; i++){
        value *= num;
    }
    cout<<value;
    return 0;
}
