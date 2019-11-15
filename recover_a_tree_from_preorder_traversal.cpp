//https://leetcode.com/problems/recover-a-tree-from-preorder-traversal
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
    //int index = 0;
    TreeNode* recoverFromPreorder(string S) {
    vector<TreeNode*> ss;
        for (int i = 0; i < S.size();) {
            int position =0, value = 0; 
            for (position = 0; S[i] == '-'; i++) {
                position++;
            }
            for (value = 0; S[i] != '-' && i < S.size(); i++) {
                value = value * 10 + S[i] - '0';
            }
            while (ss.size() > position) {
                ss.pop_back();
            }
            TreeNode* node = new TreeNode(value);
            if (!ss.empty()) {
                if (ss.back()->left) {
                    ss.back()->right = node;
                }
                else {
                    ss.back()->left = node;
                }
            }
            ss.push_back(node);
        }
        return ss[0];
    }
};