https://leetcode.com/problems/add-one-row-to-tree
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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(!root) return nullptr; 
        if(d == 1) {
            TreeNode* newroot1 =new TreeNode(v); 
            newroot1->left = root; 
            return newroot1; 
        }
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            if(--d == 0 ) return root; 
            int n = q.size(); 
            for(int i = 0; i < n; i++){
                auto t = q. front();
                q.pop(); 
                if(d == 1 ){
                    TreeNode *l = t->left; 
                    TreeNode* r = t->right; 
                    t->left = new TreeNode(v); 
                    t->right = new TreeNode(v); 
                    t->left->left = l;
                    t->right->right = r; 
                    
                } else {
                    if(t->left) q.push(t->left); 
                    if(t->right) q.push(t->right); 
                }
            }
        }
        return root; 
    }
};