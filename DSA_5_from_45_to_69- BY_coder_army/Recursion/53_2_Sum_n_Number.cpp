#include <iostream>
using namespace std;

int sum(int n){
    if(n==1){
        return 1;
    }
    return n * sum(n-1);
}
int main(){
    int n;

    cout<<"Input n : ";
    cin>>n;

    cout<<"Sum of "<<n<<" number is "<<sum(n);

    return 0;
}