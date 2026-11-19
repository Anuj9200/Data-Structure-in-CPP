#include <iostream>
#include<vector>
using namespace std;

int smallest_distinct_window(string s){
    vector<int>count(256,0);

    int first = 0, second = 0, minlen = s.size();
    int diff = 0;  // it calculate all unique character'

    // calculate all unique character
    while(first < s.size()){
        if(count[s[first]] == 0)
            diff++;

        count[s[first]] = 1;   
        first++;  // next idx of s
    }
    
    for(int i=0; i<256; i++){
        count[i] = 0;
    }

    first = 0;

    while(second < s.size()){
        // diff exist karta hai mtlb :: jbtk sbhi unique character mil n jaye
        while(diff && second<s.size()){
            if(count[s[second]] == 0)
                diff--;
            count[s[second]]++;
            second++;
        }
        minlen = min(minlen, second-first);
        
        // shrink the window to get the minimum size
        while(diff == 0){     // shrink krenge jbtk all unique present hai window mein 
            minlen = min(minlen, second-first);
            count[s[first]]--;

            if(count[s[first]] == 0){
                diff++;
            }
            first++;
        }
    }
    // minlen = DBBAC = 5
    return minlen;
}

int main(){
    string str = "AADBBACBBAC";   // ans = DBBAC   // ALL UNIQUE VALUE

    cout<<smallest_distinct_window(str);

    return 0;
}