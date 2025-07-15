#include <iostream>
using namespace std;

class Solution {
public:
// tc and sc is O(n)
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string temp = s + s;
        // this checks if goal is substr of temp and if not then it returns string::npos meaning false/-1
        return temp.find(goal) != string::npos;
    }
};