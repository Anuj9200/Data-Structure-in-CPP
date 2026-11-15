#include <iostream>
using namespace std;
int binary_complement(int n){
    int rem, compli=0, mul=1;
    if(n==0){
        return 1;
    }
    while(n>0){
        rem = n%2;
        rem = rem^1;
        compli = rem*mul + compli;
        n = n/2;
        mul *= 10;
    }
    return compli;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Compliment of binary No. is "<<binary_complement(n);

    return 0;
}