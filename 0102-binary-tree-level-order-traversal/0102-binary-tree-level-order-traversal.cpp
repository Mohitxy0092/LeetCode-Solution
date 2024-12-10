/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ar;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false) {
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++) {
                
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            ar.push_back(v);
            v.erase(v.begin(),v.end());
        }
        return ar;
    }
};