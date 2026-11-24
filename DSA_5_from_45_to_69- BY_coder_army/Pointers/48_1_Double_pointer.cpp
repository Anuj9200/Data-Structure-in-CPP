#include <iostream>
using namespace std;

void func1(int *p){
    *p = *p+1;
}

void func2(int **p){
    *p = *p+1;
}

int main(){
    
    int n = 10;
    int *p = &n;
    int **p2 = &p;
    int ***p3 = &p2;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;   
    cout<<p3<<endl;

    // // modify value of 5 by using pointer
    // *p = *p + 5;
    // cout<<n<<endl;
    // **p2 = **p2+5;   // same
    // cout<<n;
    // ***p3 = ***p3+5;   // same
    // cout<<n;

    // cout<<endl;
    // cout<<&p3<<endl;
    // cout<<p3<<endl;
    // cout<<&p2<<endl;
    // cout<<*p3<<endl;
    // cout<<&p<<endl;
    // cout<<**p3<<endl;
    // cout<<&n<<endl;
    // cout<<***p3<<endl;
    // cout<<n<<endl;

    cout<<endl;
    cout<<p<<endl;
    func1(p);
    cout<<p<<endl;

    cout<<p<<endl;
    func2(p2);
    cout<<p<<endl;


    return 0;
} 