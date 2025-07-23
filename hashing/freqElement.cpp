#include <iostream>
#include <vector>
#include <algorithm>>

using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0;
        long long sum = 0;
        int maxFreq = 0;
        int n = nums.size();
        for(int i = 0; i<n ; i++){
            sum += nums[i];
            while((long long)nums[i] *(i-left+1) - sum>k){
                sum -= nums[left];
                left++;
            }
            maxFreq = max(i-left+1,maxFreq);
        }
        return maxFreq;
    }
};