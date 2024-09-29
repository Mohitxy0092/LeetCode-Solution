/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*recur(ListNode*curr,ListNode*prev) {
        if(curr==NULL) return prev;
        ListNode*forr = curr->next;
        curr->next = prev;
        prev = curr;
        curr=forr;
        return recur(curr,prev);
        
    }
    ListNode* reverseList(ListNode* head) {
        ListNode*curr= head;
        ListNode*prev=NULL;
        ListNode* newhead = recur(curr,prev);
        return newhead;
        
    }
};