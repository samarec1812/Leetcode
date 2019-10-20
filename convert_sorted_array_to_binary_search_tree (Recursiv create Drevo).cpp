//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    return _sortedArrayToBST2(nums, 0, nums.size()-1); 
    }
    //Create Binary Drevo
    TreeNode* _sortedArrayToBST2(vector<int>& nums, int start, int konec){
        if(konec < start){
            return NULL; 
        }
         int k = (start+konec)/2; 
        TreeNode *ker = new TreeNode(nums[k]); 
        
        ker->left = _sortedArrayToBST2(nums, start, k-1); 
        ker->right = _sortedArrayToBST2(nums, k+1, konec); 
        
        return ker; 
    }
    
};