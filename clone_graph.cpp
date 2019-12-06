//https://leetcode.com/problems/clone-graph
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<int, Node*> ss; 
        return Cloning(node, ss); 
    }
    
    Node* Cloning(Node* node, unordered_map<int, Node*> &ss){
        if(!node) return node; 
        if(ss.count(node->val)) return ss[node->val]; 
        Node* newNode = new Node(node->val); 
        ss[node->val] = newNode; 
        for(int i = 0; i < node-> neighbors.size(); i++){
            (newNode->neighbors).push_back(Cloning(node->neighbors[i], ss)); 
            
        }
        return newNode; 
    }
};