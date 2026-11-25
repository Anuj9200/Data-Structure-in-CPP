// Object : it is an entity has a state and behaviour Anything that exist in physical world

#include <iostream>
using namespace std;
class A{
    double x;
    
    int c;
    char b;
    char d;
};
int main(){
    A obj1;
    cout<<sizeof(obj1);  // concept padding in size

    return 0;
}