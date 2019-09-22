//https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     if(l1 == NULL) return l2;
		if(l2 == NULL) return l1;
        
		ListNode *novinka = new ListNode(0);
		ListNode *krah = novinka;
		int h = 0;
        while(l1 && l2)
		{
			krah->next = new ListNode(0);
			krah = krah->next;
			int sum = l1->val+l2->val+h;
			h = sum/10;
			int mod = sum % 10;
			krah->val = mod;
			l1 = l1->next;
			l2 = l2->next;
        }

		while(l1)
		{
			krah->next = new ListNode(0);
			krah = krah->next;
			int sum = l1->val+h;
			h = sum/10;
			int mod = sum%10;
			krah->val = mod;
			l1 = l1->next;
		}
		while(l2)
		{
			krah->next = new ListNode(0);
			krah = krah->next;
			int sum = l2->val+h;
			h = sum/10;
			int mod = sum % 10;
			krah->val = mod;
			l2 = l2->next;
		}
		if(h){
			krah->next = new ListNode(h);
		}
		return novinka->next;
  
    }
};
