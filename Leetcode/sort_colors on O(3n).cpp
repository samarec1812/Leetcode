//https://leetcode.com/problems/sort-colors
class Solution {
public:
    void sortColors(vector<int>& nums) {
     vector<int>num; 
        for(auto& w: nums){
            if(w == 0){num.push_back(w); }
        }
         for(auto& w: nums){
            if(w == 1){num.push_back(w); }
        }
         for(auto& w: nums){
            if(w == 2){num.push_back(w); }
        }
         for(int i =0; i < nums.size(); i++){
         nums[i] = num[i];    
         }
        
        
    }
};