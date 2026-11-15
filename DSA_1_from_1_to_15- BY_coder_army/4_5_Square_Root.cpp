#include <iostream>
#include<limits.h>
using namespace std;
int mySqrt(int x) {

    int i = 1;

    while (i <= x / i) {
        i++;
    }

    return i - 1;
}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    cout<<"Square Root of "<<n<<" is "<<mySqrt(n);
    return 0;
}
