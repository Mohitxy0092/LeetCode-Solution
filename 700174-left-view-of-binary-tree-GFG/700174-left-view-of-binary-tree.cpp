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
//   int maxi=0;
//     void lft(Node*root,int level,vector<int>&ans) {
//         if(!root) return;
//         if(maxi<level) {
//             ans.push_back(root->data);
//             maxi=level;
//         }
//         lft(root->left,level+1,ans);
//         lft(root->right,level+1,ans);
//     }

    vector<int> lod(Node*root) {
        if(!root) return {};
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()) {
            int currs=q.size();
            for(int i=0;i<currs;++i) {
            Node*curr=q.front();
            q.pop();
                if(i==0) {
                    ans.push_back(curr->data);
                }
                if(curr->left !=nullptr) q.push(curr->left);
                if(curr->right !=nullptr) q.push(curr->right);
            }
        }
        return ans;
    }
    vector<int> leftView(Node *root) {
        // code here
        // vector<int>ans;
        // lft(root,1,ans);
        return lod(root);
    }
};