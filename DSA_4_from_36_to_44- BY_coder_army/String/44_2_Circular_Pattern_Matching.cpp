#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int circular_matching(string str1, string str2){
    
    vector<int>lps(str2.size(), 0);
    int pre=0, suf=1;

    // making lps for needle string
    while(suf < str2.size()){
        if(str2[pre] == str2[suf]){
            lps[suf] = pre+1;
            pre++, suf++;
        }
        else{
            if(pre == 0){
                lps[suf] = 0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }

    // KMP FOR STRING MATCHING
    str1 += str1;
    int first = 0, second = 0;
    while(second < str2.size() && first < str1.size()){
        if(str1[first] == str2[second]){
            first++, second++;
        }
        else{
            if(second == 0){
                first++;
            }
            else{
                second = lps[second-1];
            }
        }

        if(second == str2.size()){
            return 1;
        }
    }

    return -1;

}

int main(){
    string str1 = "cdeabroab";
    string str2 = "abcde";

    cout<<circular_matching(str1, str2);

    return 0;
}
