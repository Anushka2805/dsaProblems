#include <iostream>
using namespace std;

class Solution {
public:
//tc and sc is O(n)
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        for(int i = 0;i<s.length();i++){
            string rotatedString = s.substr(i) + s.substr(0,i);
            if(rotatedString == goal){
                return true;
            }
        }
        return false;
    }
};