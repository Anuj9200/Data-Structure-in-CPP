#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
    ifstream fin;
    fin.open("hello3.txt");
    string line;
    while(getline(fin, line)){
        cout<<line<<"\n";
    }
   
    fin.close();

    return 0;
}