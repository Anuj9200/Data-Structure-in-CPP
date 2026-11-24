#include <iostream>
using namespace std;
int main(){
    char c[] = "GATE2024";

    char *p = c;

    cout<<p+p[3]-p[1];    // ascii value pr work krega
    // p:first idx of char array  = 100
    // p[3] : value at idx 4 char array  = 'E'
    // p[1] : value at idx 1 char array  = 'A'
    // so : 100 + 'E' - 'A'  = 100 + 4 ==> 104
    // 104 idx means idx of 5th character of char array : so if cout<<104 :: it will print from 104 to NULL so :: 2024 will THE OUTPUT

    return 0;
} 