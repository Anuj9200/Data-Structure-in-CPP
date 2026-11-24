#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    cout<<&a<<endl;    
    cout<<ptr<<" "<<*ptr<<endl;    
    cout<<sizeof(ptr)<<endl;    // size of ptr2 :: 8 byte

    float m = 6.5;
    float *ptr1 = &m;

    cout<<ptr1<<" "<<*ptr1<<endl;   
    cout<<sizeof(ptr1)<<endl;   // size of ptr2 :: 8 byte

    char c = 'd';
    char *ptr2 = &c;

    cout<<ptr2<<" "<<*ptr2<<endl;   
    cout<<sizeof(ptr1)<<endl;   // size of ptr2 :: 8 byte, doesnot matter char takes 1 byte

    return 0;
}