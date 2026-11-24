#include <iostream>
#include<vector>
using namespace std;

void Tohcal(int n, int sour, int help, int dest){
    if(n ==  1){
        cout<<"MOve Disk "<<n<<" from rod "<<sour<<" tp rod "<<dest<<endl;
        return;
    }
    
    Tohcal(n-1, sour, dest, help);
    cout<<"MOve Disk "<<n<<" from rod "<<sour<<" tp rod "<<dest<<endl;
    Tohcal(n-1, help, sour, dest);
}

int main(){
    int n;

    cout<<"Enter No. of disk : ";
    cin>>n;
     
    Tohcal(n, 1, 2, 3);
    
    return 0;
}