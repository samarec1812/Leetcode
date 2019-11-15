//https://leetcode.com/problems/remove-duplicates-from-sorted-array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>a; 
        for(auto &w: nums){
            a.insert(w); 
        }
        nums.clear(); 
        for(auto &w: a){
            nums.push_back(w); 
        }
        return nums.size(); 
    }
};