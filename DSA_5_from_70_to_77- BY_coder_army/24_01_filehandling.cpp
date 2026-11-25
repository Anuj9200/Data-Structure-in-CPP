#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin;

    fin.open("hello.txt");

    // char c;
    // c = fin.get();
    // while(!fin.eof()){
    //     cout<<c;
    //     c = fin.get();
    // }
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();

    return 0;
}