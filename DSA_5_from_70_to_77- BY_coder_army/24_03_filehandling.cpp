#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(){
    // WRITE IN FILE
    ofstream fout;
    fout.open("hello2.txt");

    fout<<"Hello World\n";
    fout<<"Hello Virat\n";
    fout<<"Hello bhai\n";
    
    fout.close();

    // READ FROM FILE
    ifstream fin;
    fin.open("hello2.txt");
    string line;
    while(getline(fin, line)){
        cout<<line<<"\n";
    }
    fin.close();
    
    return 0;
}