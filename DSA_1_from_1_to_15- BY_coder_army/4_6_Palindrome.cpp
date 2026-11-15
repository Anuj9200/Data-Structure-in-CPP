#include <iostream>
using namespace std;
int is_palindrome(int x){
    int rev=0, rem, temp=x;
    while(x>0){
        rem = x%10;
        rev = rev*10+rem;
        x = x/10;
    }
    if(temp == rev) return 1;
    else return 0;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(is_palindrome(n)) cout<<"No. is palindrome ";
    else cout<<"Not a Palindrome";

    return 0;
}