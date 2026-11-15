// Q - Given a position of bishop(A,B) on a 8*8 chessboard.
// Task is to count the total no. of squares that can be visited by the bishop from one position.

#include <iostream>
using namespace std;
int main(){
    int r1 , c1, count=0;
    cout<<"Enter the position of Bishop : ";
    cin>>r1>>c1;

    count += min(8-r1, 8-c1);
    count += min(8-r1, c1-1);
    count += min(r1-1, 8-c1);
    count += min(r1-1, c1-1);

    cout<<"The total no. of square can be visited by bishop : "<<count;
    
    return 0;
}