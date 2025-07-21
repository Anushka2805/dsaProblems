#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m-1;
        int left = 0;
        int right = n-1;
        vector<int> result;
        while(top <= bottom && left <= right){
            for(int i = left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int j = top; j <= bottom; j++){
                result.push_back(matrix[j][right]);
            }
            right--;
            if(top<= bottom){
                for(int k = right;k >= left ; k--){
                    result.push_back(matrix[bottom][k]);
                }
                bottom--;
            }    
            if(left<=right){
                for(int l = bottom;l >= top ; l--){
                    result.push_back(matrix[l][left]);
                }
                left++;
            }    
        }
        return result;
    }
};