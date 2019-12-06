//https://leetcode.com/problems/binary-tree-maximum-path-sum
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
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN; 
        Sum(root, res); 
        return res; 
        
    }
    int Sum(TreeNode* head, int& res){
        if(!head) return 0; 
        int left = max(Sum(head->left, res), 0); 
        int right = max(Sum(head->right, res), 0); 
        res = max(res, left + right + head->val); 
        return max(left, right)+head->val; 
    }
};