//  example : 
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

#include <iostream>
using namespace std;

int sum_digit(int num){

    while(num>9){
        int val=0, rem;
    while(num>0){
        rem = num % 10;
        val = val + rem;
        num = num / 10;
    }
    num = val;
    }
    return num;
}
int main(){
    int num;
    cout<<"Enter value of num : ";
    cin>>num;
    
    cout<<"Sum of digits : "<<sum_digit(num);

    return 0;
}

