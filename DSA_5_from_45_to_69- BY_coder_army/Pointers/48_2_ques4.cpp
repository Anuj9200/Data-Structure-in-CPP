#include <iostream>
using namespace std;

void func(char *str1, char *str2){
    while(*str1 = *str2){
        str1++, str2++;
    }
}

int main(){
    char first[] = "Mohit";
    char second[] = "Rohit";

    func(first, second);

    cout<<first;


    return 0;
}