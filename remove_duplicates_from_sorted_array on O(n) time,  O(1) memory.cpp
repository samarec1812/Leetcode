//https://leetcode.com/problems/remove-duplicates-from-sorted-array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size() <=1) return nums.size(); 
        size_t prev = 0, cur = 0; 
        while(cur < nums.size()){
        
            if(nums[cur] == nums[prev]) ++cur; 
            else nums[++prev] =nums[cur++]; 
        }
        return prev+1; 
    }
};