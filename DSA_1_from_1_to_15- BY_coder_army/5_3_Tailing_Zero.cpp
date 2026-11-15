// Trailing Zero ::  A trailing zero is a zero that appears at the end of a number and indicates how many times the number is divisible by 10; for example, 14000 has three trailing zeros

#include <iostream>
using namespace std;

int count_zero(int n){
    int rem, i=0;
    while(n>=5){
        i += n/5;
        n /= 5;
    }
    return i;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Tailing count of Zero is : "<<count_zero(n);

    return 0;
}