#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int rem, count=0, temp = n;
    float sum=0;    // sum should be under float datatype because pow() return double value like :: pow(3,3)->26.9999 so it beacomes 26 in int datatype

    while(n>0){
        n /= 10;
        count++;
    }
    n = temp;
    while(n){
        rem = n%10;
        sum = sum + pow(rem,count);
        n /= 10;
    }
    if(temp == (int)sum){
        cout<<"\nArmstrong No.";
    }
    else{
        cout<<"\nNot a Armstrong No.";
    }

    return 0;
}