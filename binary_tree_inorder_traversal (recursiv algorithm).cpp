//https://leetcode.com/problems/binary-tree-inorder-traversal
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

    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* head1 = root; 
        vector<int>a; 
        Recurs(root, a); 
        return a; 
        }
        void Recurs(TreeNode *head1, vector<int> &ans){
        
        if(!head1) return; 
         if(head1->left){
            
             Recurs(head1->left, ans); 
        }   
        ans.push_back(head1->val); 
         if(head1->right) {
             Recurs(head1->right, ans); 
        }
    }
};