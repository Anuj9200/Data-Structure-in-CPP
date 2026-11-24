#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 10;
    int &name = a;  // name is reference variable : references a means name ko change modify krenge to a bhi hoga kyu ek ko hi reference kr rha hai
    int *ptr = &a;
    (*ptr)++;
    ptr = &b;
    *ptr = *ptr + 5;
    name += 5;    // 6 + 5

    cout<<a<<b;

    return 0;
}