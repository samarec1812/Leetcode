//https://leetcode.com/problems/maximum-subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=0; 
     int ans =nums[0]; 
        int mini =0;
        for(int i =0; i< nums.size(); i++){
          sum+=nums[i]; 
            ans=max(ans, sum - mini); 
            mini= min(mini, sum); 
        }
        return ans; 
    }
};