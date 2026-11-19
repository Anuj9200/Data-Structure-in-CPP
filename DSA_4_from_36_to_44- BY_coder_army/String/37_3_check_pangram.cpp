#include <iostream>
#include<vector>
using namespace std;

bool check_Pangram(string sentence){
    vector<bool>alpha(26,0);

    for(int i=0; i<sentence.size(); i++){
        int idx = sentence[i]-'a';
        alpha[idx] = 1;
    }

    for(int i=0; i<alpha.size(); i++){
        if(alpha[i] != 1){
            return 0;
        }
    }
    return 1;
}

int main(){
    string str1 = "knkjbkjbadknkncdkqamazon";
    string str = "abcduvefghijklmnopqrstwxyz";


    if(check_Pangram(str1)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    if(check_Pangram(str)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }

    return 0;
}