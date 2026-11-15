#include <iostream>
using namespace std;
int main(){
    int n, fterm=0, sterm=1, nextterm;
    cout<<"Enter n : ";
    cin>>n;
    
    cout<<"Fibonacci Series : "<<fterm<<" "<<sterm<<" ";
    nextterm = fterm + sterm;

    for(int i=2; i<n; i++){
        cout<<nextterm<<" ";
        fterm = sterm;
        sterm = nextterm;
        nextterm = fterm + sterm; 
    }

    cout<<"\nThe Value of fibonacci "<<n<<" is : "<<nextterm;

    return 0;
}