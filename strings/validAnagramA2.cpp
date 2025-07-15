#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sMap;
        unordered_map<char,int> tMap;
        if(s.length() != t.length()){
            return false;
        }
        for(char c : s){
            sMap[c]++;
        }
        for(char c : t){
            tMap[c]++;
        }
        if(sMap == tMap){
            return true;
        }
        return false;
    }
};