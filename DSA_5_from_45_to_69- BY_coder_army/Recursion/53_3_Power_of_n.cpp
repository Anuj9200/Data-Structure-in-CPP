#include <iostream>
using namespace std;

int pow(int n , int p){
    if(p == 0)
    return 1;
    if(p==1){
        return n ;
    }
    return n * pow(n, p-1);
}
int main(){
    int num, p;

    cout<<"Input num : ";
    cin>>num;

    cout<<"enter power : ";
    cin>>p;

    cout<<num<<" Raised to the power "<<p<<" is "<<pow(num, p);

    return 0;
}