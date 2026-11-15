#include <iostream>
#include <limits.h>
using namespace std;
int reverse(int x){
    int rem, rev=0;
    while(x!=0){
        rem = x%10;
        if(rev>INT_MAX/10 || rev<INT_MIN/10){
            return 0;
        }
        rev = rev * 10 + rem;
        x /= 10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter num : ";
    cin>>num;

    cout<<"Reverse num :: "<<reverse(num);
    return 0;
}