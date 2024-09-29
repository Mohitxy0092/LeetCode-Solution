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
    ListNode* getMiddle(ListNode*&head,ListNode*&middleHead) {
        ListNode*fast = head;
        ListNode*slow = head;
        while(fast!=NULL) {
            fast=fast->next;
            if(fast!=NULL) {
                fast=fast->next;
                middleHead=slow;
                slow=slow->next;
            }
        }
        return slow;
    }
    ListNode* reverseLL(ListNode*curr,ListNode*prev) {
        while(curr!=NULL) {
            ListNode*forr = curr->next;
            curr->next = prev;
            prev=curr;
            curr=forr;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //empty
        if(head==NULL) {
            return true;
        }
        //single node
        else if(head->next == NULL) {
            return true;
        }
        //more than 1
        ListNode*firsthalfHead =head;
        ListNode*middleHead=NULL;
        ListNode*middleNode = getMiddle(head,middleHead);
        middleHead->next = NULL;
        ListNode*prev=NULL;
        ListNode*curr = middleNode;
        ListNode*secondhalfHead= reverseLL(curr,prev);
        ListNode*temp1 = firsthalfHead;
        ListNode*temp2 = secondhalfHead;
        while(temp1!=NULL) {
            if(temp1->val != temp2->val) {
                return false;
            }
                temp1=temp1->next;
                temp2=temp2->next;
        }
        return true;
    }
};