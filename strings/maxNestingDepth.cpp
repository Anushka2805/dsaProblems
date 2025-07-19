#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
      int depth = 0;
      int maximumDepth = 0;
      for(int i = 0; i<s.size();i++){
        if(s[i] == '('){
            depth++;
            maximumDepth = max(maximumDepth,depth);
        }else if(s[i] == ')'){
            depth--;

        }
      }return maximumDepth;  
    }
};