//https://leetcode.com/problems/delete-nodes-and-return-forest
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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        stack<TreeNode*> this_delete;
        findDeleting(root, to_delete, this_delete);
        vector<TreeNode*> res;
        if (this_delete.empty()){
            res.push_back(root);
        } else {
            while (!this_delete.empty()) {
                TreeNode* tmp = this_delete.top();
                this_delete.pop();
                if (tmp == root)
                    root = NULL;
                if (tmp != NULL) {
                    if (tmp -> left != NULL)
                        res.push_back(tmp->left);
                    if (tmp -> right != NULL)
                        res.push_back(tmp->right);
                    tmp = NULL;
                }
            }
            if (root != NULL)
                res.push_back(root);
        }
        return res;
    }
    
    int findDeleting(TreeNode* root, vector<int>& to_delete, stack<TreeNode*>& this_delete) {
        if (root) {
            if (find(root->val, to_delete)) {
                this_delete.push(root);
            }
            findDeleting(root->left, to_delete, this_delete);
            if (root->left != NULL  && find(root->left->val, to_delete)) {
                root->left = NULL;
            }
            findDeleting(root->right, to_delete, this_delete);
            if (root->right != NULL && find(root->right->val, to_delete)) {
                root->right = NULL;
            }
        }
        return 0;
    }
    
    bool find(int val, vector<int>& arr) {
        for (auto tmp: arr) {
            if (tmp == val)
                return true;
        }
        return false;
    }
};