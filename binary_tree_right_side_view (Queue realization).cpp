//https://leetcode.com/problems/binary-tree-right-side-view
 /** Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a; 
        if(root == NULL) return a; 
        TreeNode* hide =root; 
    //   a.push_back(hide->val); 
       queue<TreeNode*>b; 
        b.push(root); 
        while(!b.empty()){
            a.push_back(b.back()->val); 
           int jek = b. size(); 
            for(int i= 0; i < jek; i++){
            TreeNode * ker = b.front();
            b.pop(); 
        
            if (ker->left){  b.push(ker->left); } 
            if(ker->right)  { 
                b.push(ker->right);
                            }
            }
          //  if(ker->right && ker->left){ b.push(ker->left);}   
               
             //a.push_back(hide->val);
           
                                  
        }
   return a; 
    }
};