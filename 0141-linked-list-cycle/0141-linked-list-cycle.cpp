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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool>hash;
        ListNode*temp=head;
        while(temp!=NULL) {
            if(hash[temp]==true) {
            return true;
            }
            else {
                hash[temp]=true;
            }
            temp=temp->next;
        }
        return false;
    }
};