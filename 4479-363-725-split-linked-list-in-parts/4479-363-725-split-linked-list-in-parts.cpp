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
    int getlength(ListNode*head) {
        int size=0;
        ListNode*temp=head;
        while(temp!=NULL) {
            size++;
            temp=temp->next;
        }
        return size;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = getlength(head);
        vector<ListNode*>res(k,nullptr);
        ListNode*curr=head;
        ListNode*prev=nullptr;
        int remainNode=size%k;
        for(int i=0;i<k;++i) {
            res[i]=curr;
            for(int cnt=1;cnt<=((size/k)+(remainNode >0 ? 1 : 0));cnt++) {
                prev=curr;
                curr=curr->next;
            }
            if(prev!=nullptr)
             prev->next=nullptr;
            
            remainNode--;
        }
        return res;
    }
};