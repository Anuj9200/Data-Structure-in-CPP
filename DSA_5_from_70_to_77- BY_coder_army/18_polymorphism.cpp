// FUNCTION OVERLOADING

#include <iostream>
using namespace std;
class Area{
public:
    int calculatearea(int r){
        return 3.14*r*r;
    }
    int calculatearea(int l, int b){
        return l*b;
    }
};
int main(){
    Area a1;
    cout<<a1.calculatearea(4)<<endl;
    Area a2;
    cout<<a2.calculatearea(5, 7)<<endl;

    return 0;
}