#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
//tc is O(n)
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m  = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int val = 0;
        for(int i = 0;i<s.size();i++){
            if(i+1<s.size() && m[s[i]] < m[s[i+1]]){ //checks that the next roman digit exists or not 
                val -= m[s[i]];
            }
            else{ //if the next roman digit DNE
                val += m[s[i]];
            }
        }
        return val;
    }
};