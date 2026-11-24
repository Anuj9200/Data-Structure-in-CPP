#include <iostream>
using namespace std;

int sq_sum(int n){
    if(n == 1)
        return 1;

    return n * n + sq_sum(n-1);
}
int main(){
    int n;

    cout<<"Input n : ";
    cin>>n;

    cout<<n<<" Sum of square of "<<n<<" number is "<<sq_sum(n);

    return 0;
}