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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(-1);
        ListNode*ansptr=ans;
        while(l1 && l2) {
            if(l1->val <=l2->val) {
                ansptr->next=l1;
                ansptr=l1;
                l1=l1->next;
            }
            else {
                ansptr->next=l2;
                ansptr=l2;
                l2=l2->next;
            }
        }
        ansptr->next=l1 ? l1 : l2;
        return ans->next;
    }
};