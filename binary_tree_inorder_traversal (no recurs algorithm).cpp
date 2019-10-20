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
        if(!head1){ return a; }
        
    TreeNode *tec1, *tec2; 

        tec1 =root; 
        while(tec1){
            if(!tec1->left){ //при отсутствии левой вершины
                a.push_back(tec1->val); 
                tec1 = tec1->right; 
            }
            else {
                
                tec2 = tec1->left; 
                while(tec2->right && tec2->right!=tec1){
                    //доходим до правой части 
            tec2 = tec2->right;
                }
              if(!tec2->right){
        //если правая вершина отсутствует, возвращаемся на уровень tec1, откуда начался спуск вправо
        //и начинаем спуск влево
                  tec2->right =tec1;
                  tec1= tec1->left; 
              }  
                else {
 //если последняя правая вершина n куска существует, то, очевидно что следующая правая пуста 
                    tec2->right= NULL;
                    a.push_back(tec1->val); 
                    tec1=tec1->right; 
                }      
            }
        }
        
        return a; 
        }
};