#include <iostream>
#include <string>
#include <climits> //used for int_max
using namespace std;
//tc is O(n^2) and sc is O(1)
class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        for(int i = 0;i<s.size();i++){
            int freq[26] = {0};
            for(int j = i;j<s.size();j++){
                freq[s[j] - 'a']++;
                int maxFreq = 0;
                int minFreq = INT_MAX;
                for(int k = 0;k<26;k++){
                    if(freq[k] > 0){
                        maxFreq = max(maxFreq,freq[k]);
                        minFreq = min(minFreq,freq[k]);
                    }
                }
                beauty += maxFreq-minFreq;
            }
        }
        return beauty;
    }
};