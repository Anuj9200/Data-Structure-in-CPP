#include <iostream>
using namespace std;
int main(){
     
    char arr[5] = "1234";

    char *ptr = arr;

    cout<<ptr<<endl;   // ye address nhi blki us char se NULL tk print krega
    cout<<*ptr<<endl;   // value at that address : 1

    // Char datatype mein adddress print krane ke liye (void *) ko use krna pdega
    cout<<(void*)ptr<<endl;   // ye bs whi char print krega , kyuki uska typr pointer se change kr diya


    // Reference Variable
    int n = 10;
    int &a = n;   // a is reference variable

    return 0;
}