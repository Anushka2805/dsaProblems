#include <iostream>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.size()-1;i>=0;i--){
            if((num[i] - '0')%2 == 1){ //as here num is char not number
                return  num.substr(0,i+1);
            }
        }
        return "";
    }
};