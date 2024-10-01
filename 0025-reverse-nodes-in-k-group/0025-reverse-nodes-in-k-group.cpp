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
    int getlength(ListNode*&head) {
        int current=0;
        ListNode*temp=head;
        while(temp !=NULL) {
            current++;
            temp=temp->next;
        }
        return current;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*prev =NULL;
        ListNode*curr = head;
       
        if(head==NULL || head->next==NULL) return head;
        int len=getlength(head);
        if(len<k) return head;
        int pos =0;
        while(pos<k) {
            ListNode*forr = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forr;
            pos++;
        }
        if(curr!=NULL) {
            ListNode* recurr = reverseKGroup(curr,k);
            head->next =recurr;
        }
        return prev;
    }
};