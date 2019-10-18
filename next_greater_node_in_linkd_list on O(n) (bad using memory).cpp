//https://leetcode.com/problems/next-greater-node-in-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>a;
        if(!head){a.push_back(0);  return a;} 
        ListNode *tec =head; 
        while(tec){
            a.push_back(tec->val); 
            tec=tec->next; 
        }
        stack<int>ans; 
        vector<int>ans2(a.size()); 
        ans.push(0); 
        for(int i =1; i < a.size(); i++){
            while(!ans.empty() && a[ans.top()] < a[i]){
                
                ans2[ans.top()]=a[i]; 
                ans.pop(); 
        
            }
            ans.push(i); 
        }
         while(!ans.empty()){
             ans2[ans.top()] =0; 
             ans.pop(); 
             
         } 
        a.clear(); 
                   
   return ans2; 
    }
};