#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;

class Solution {
public:

//tc = O(n)
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,char> s_t;
        unordered_map<char,char> t_s;
        for(int i = 0;i<s.length();++i){
            if((s_t.count(s[i]) && s_t[s[i]] != t[i]) || (t_s.count(t[i]) && t_s[t[i]] != s[i])){
                return false;
            }
            s_t[s[i]] = t[i];
            t_s[t[i]] = s[i];
        }
        return true;

    }
};