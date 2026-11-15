#include <iostream>
using namespace std;
int main(){
    int num, rem, dec=0, mul = 1;
    cout<<"Enter value of num : ";
    cin>>num;

    while(num>0){
        rem = num % 10;
        dec = dec + rem * mul;
        num = num / 10;
        mul *= 2;
    }
    cout<<"Binary to Decimal : "<<dec;

    return 0;
}