#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //  file ko open karna
    ofstream fout;
    fout.open("hello.txt");

    // write kar sakta hu
    fout<<"Hello World";

    fout.close();
    return 0;
} 