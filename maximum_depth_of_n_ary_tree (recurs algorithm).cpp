//https://leetcode.com/problems/maximum-depth-of-n-ary-tree

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
       
        return Depth(root, 1); 
        
    }
    
    int Depth(Node* root, int maximum){
        if(!root) return 0; 
         int maxl = 1; 
        maxl = maximum; 
         for(Node* child: root->children){
             maxl= max(maxl, Depth(child, maximum+1)); 
             
         }
        
        return maxl;
    }
};