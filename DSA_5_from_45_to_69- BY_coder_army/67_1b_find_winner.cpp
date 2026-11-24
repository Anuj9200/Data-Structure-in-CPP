#include <iostream>
using namespace std;

    int winner(int n, int k){
        if(n==1)
            return 0;
        
        return (winner(n-1,k) + k)%n;
    }

    int findTheWinner(int n, int k) {
        return winner(n, k)+1;
    }

int main(){
    int n,k;
    cout<<"Enter no. of Friends : ";
    cin>>n;

    cout<<"Enter k : ";
    cin>>k;

    cout<<findTheWinner(n, k);
    
    return 0;
    return 0;
}