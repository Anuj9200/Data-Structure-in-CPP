#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> fact(int n){
    vector<int>ans(1,1);

    while(n>1){
        int carry=0, mul=0, size = ans.size();
        for(int i=0; i<size; i++){
            mul = ans[i]*n + carry;
            carry = mul/10;
            ans[i] = mul%10;
        }
        while(carry){       // multiply ho rha hai to carry double digit bhi ho skti hai
        ans.push_back(carry%10);    
        carry = carry/10;
        }
        n--;
    }
    reverse(ans.begin(), ans.end());

    // question need ans in vector form so we directly return ans
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    vector<int> ans = fact(n);

    cout<<"Factorial of "<<n<<" is : ";

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    
    return 0;
}