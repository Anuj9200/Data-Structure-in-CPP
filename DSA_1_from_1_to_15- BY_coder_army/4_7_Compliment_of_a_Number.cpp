#include <iostream>
using namespace std;
int into_binary(int x){
    int rem, binary=0, mul=1;
    while(x>0){
        rem = x%2;
        binary = rem*mul + binary;
        x = x/2;
        mul *= 10;
    }
    return binary;
}
int binary_complement(int x){
    int rem, compli=0, mul=1;
    while(x>0){
        rem = x%10;
        if(rem==1){
            rem = 0;
            compli = rem*mul + compli;
            x /= 10;
            mul *= 10;
        }
        else{
            rem = 1;
            compli = rem*mul + compli;
            x /= 10;
            mul *= 10;
        }
        
    }
    return compli;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int bin = into_binary(n);
    cout<<bin<<"\n";

    cout<<"Compliment of binary No. is "<<binary_complement(bin);

    return 0;
}