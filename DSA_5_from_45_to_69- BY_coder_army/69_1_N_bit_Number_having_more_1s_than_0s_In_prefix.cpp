#include <iostream>
#include<vector>
using namespace std;

void print(int n, vector<string>&ans, string &temp, int zero, int one){
    if(temp.size() == n){
        ans.push_back(temp);
        return;
    }

    temp.push_back('1');
    print(n, ans, temp, zero, one+1);
    temp.pop_back();

    if(zero < one){
        temp.push_back('0');
        print(n, ans, temp, zero+1, one);
        temp.pop_back();
    }

}
int main(){
    int n;
    cout<<"Enter no. of Bit : ";
    cin>>n;

    vector<string>ans;
    string temp;

    print(n, ans, temp,0,0);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}