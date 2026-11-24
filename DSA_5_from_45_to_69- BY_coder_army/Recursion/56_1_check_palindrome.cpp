#include <iostream>
using namespace std;

bool check_pal(string str, int start, int end){
    if(start >= end)
        return 1;

    if(str[start] != str[end])
        return 0;

    return check_pal(str, start+1, end-1);
}
int main(){
    string str = "naman";

    cout<<check_pal(str, 0, str.size()-1);

    return 0;
}