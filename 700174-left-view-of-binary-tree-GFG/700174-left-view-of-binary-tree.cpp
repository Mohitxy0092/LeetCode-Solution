/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  int maxi=0;
    void lft(Node*root,int level,vector<int>&ans) {
        if(!root) return;
        if(maxi<level) {
            ans.push_back(root->data);
            maxi=level;
        }
        lft(root->left,level+1,ans);
        lft(root->right,level+1,ans);
    }
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        lft(root,1,ans);
        return ans;
    }
};