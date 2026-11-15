#include <iostream>
using namespace std;
int main(){
    int num, rem, binary=0, mul = 1;  // 1 means 10 ki power 0
    cout<<"Enter value of n : ";
    cin>>num;

    while(num>0){
        rem = num % 2;  // you can also write this rem = num & 1 (bitwise AND operator) :> 1101 & 0001 ==> 1 So rem become, rem = 1
        binary = binary + rem * mul;
        num = num/2;    // you can also write this rem = num >> 1 (bitwise right shift operator)  :> 1101 >> 1 ==>> all bits shifted 1 bit right side So num become, num = 110
        mul *= 10;
    }

    cout<<"Decimal to binary : "<<binary;

    return 0;
}