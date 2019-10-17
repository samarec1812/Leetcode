//https://leetcode.com/problems/split-linked-list-in-parts
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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
      //  ListNode *tecr = root;
        //ListNode *tec = root;
        int n = 0;
        for(ListNode* s = root; s; s=s->next){
            n++; 
        }
        
           vector<ListNode*>a(k); 
        for(int i = 0; i < k && root; i++){
            a[i]= root; 
           
            for(int j = 1; j < n/k+(i<n%k); j++){
           root= root->next; 
            }
          ListNode*  newNode = root->next; 
           root-> next = NULL; 
            root =newNode; 
       
        }
        return a; 
    }
};