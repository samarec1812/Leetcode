//https://leetcode.com/problems/maximum-subarray
//Jay Kadane algorithm (elegante)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=0; 
     int ans =nums[0]; 
        for(int i =0; i< nums.size(); i++){
          sum+=nums[i]; 
            ans=max(sum, ans); 
            sum= max(sum, 0); 
        }
        return ans; 
    }
};