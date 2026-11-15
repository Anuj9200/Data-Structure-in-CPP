#include <iostream>
using namespace std;

int power_of_2(int x){
    
    if(x<0) return 0;

    while(x != 1){
        if(x%2 != 0){
            return 0;
        }
        x /= 2;
    }
    return 1;
}
int main(){
    int x;
    cout<<"Enter x : ";
    cin>>x;

    if(power_of_2(x)){
        cout<<x<<" is a power of 2";
    }
    else{
        cout<<x<<" is not a power of 2";
    }
    return 0;
}