#include <iostream>
using namespace std;

int is_leap_year(int year){

    if(year%400==0 || year%100!=0 && year%4==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int year;
    cout<<"Enter value of year : ";
    cin>>year;
    
    if(is_leap_year(year)){
        cout<<"Yes, This is leap Year :: "<<year;
    }
    else{
        cout<<"No, This is Not a leap Year :: "<<year;
    }

    return 0;
}

