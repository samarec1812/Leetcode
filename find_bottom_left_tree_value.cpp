//https://leetcode.com/problems/find-bottom-left-tree-value
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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0; 
        int res = 0; 
        queue<TreeNode*> w; 
        w.push(root); 
        while(!w.empty()){
            int n = w.size(); 
            for(int i = 0; i < n; ++i){
                TreeNode *cur = w.front(); 
                w.pop(); 
                if(i == 0) res = cur -> val; 
                if(cur -> left) w.push(cur->left); 
                if(cur -> right) w.push(cur->right); 
            }
        }
        return res; 
    }
};