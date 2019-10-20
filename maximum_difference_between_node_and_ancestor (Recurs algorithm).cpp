//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor
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
    int maxAncestorDiff(TreeNode* root, int min1 = INT_MAX, int max1 = INT_MIN) {
           if(root == NULL) return 0;
        
        min1 = min(min1, root->val); 
        max1 = max(max1, root->val); 
         
        kik = max(kik, abs(max1- min1));
        maxAncestorDiff(root->right, min1, max1); 
        maxAncestorDiff(root->left, min1, max1); 
        
        
       return kik;  
    }
    private:
        int kik = 0; 
};