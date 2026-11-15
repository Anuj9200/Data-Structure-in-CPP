#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter n:";
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<"total sum is : "<<sum;
    cout<<(n*(n+1))/2;

    return 0;
}