#include <iostream>
using namespace std;

int my_sqrt(int x){
    
    if(x < 2) return x;

    int start = 0, end = x, mid, val;

    while(start <= end){
        mid = start + (end-start)/2;
        if(mid != 0 && mid == x/mid){       // to avoid int overflow we used if(mid == x/mid) instead of this -->  if (mid * mid == x)
            val = mid;
            break;
        }   
        else if(mid != 0 && mid < x/mid){
            val = mid;
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
    }

    return val;

}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Square Root of "<<n<<" is : "<<my_sqrt(n);

    return 0;
}