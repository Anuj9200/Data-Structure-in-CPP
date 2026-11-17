// Q- Given an array of size N-1 such thta it only contains distinct integers in the range of 1 to N. Find the missing element.
// which 1 number is missing we have to find that Number 
#include <iostream>
using namespace std;
int main(){
    int n, arr[100], sum=0;

    cout<<"Enter n : ";
    cin>>n;

    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    int total = (n*(n+1))/2;   // total sum upto n=6
    
    cout<<"Missing No. is "<<total-sum;

    return 0;
}