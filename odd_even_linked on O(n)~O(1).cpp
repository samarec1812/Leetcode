//https://leetcode.com/problems/odd-even-linked-list
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head ->next) return head; 
        ListNode *tec =head, *tec2 = head ->next; 
        
        while(tec2 && tec2->next){
            ListNode* trek = tec->next; 
            tec->next = tec2->next; 
            tec2->next= tec2->next->next; 
            tec->next->next=trek; 
            tec2=tec2->next; 
            tec=tec->next; 
        }
        return head; 
        
    }
};