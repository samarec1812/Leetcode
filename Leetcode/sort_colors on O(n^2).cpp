https://leetcode.com/problems/sort-colors
class Solution {
public:
    void Swap(int& a, int& b){
        int k =  a; 
         a =  b; 
        b = k; 
    }
    
    void sortColors(vector<int>& nums) {
    // vector<int>num; 
      
            for(int i=0; i< nums.size(); i++) {
        for(int j = i+1; j<nums.size(); j++){
        if (nums[i] > nums[j]) {
            Swap(nums[i], nums[j]);

        }}}
   
        
    }
};