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
    int getDepth(TreeNode*root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        int lh=INT_MAX;
        int rh=INT_MAX;
        if(root->left) lh= getDepth(root->left);
        if(root->right) rh = getDepth(root->right);
        return 1+min(lh,rh);
    }
    int minDepth(TreeNode* root) {
       return getDepth(root);
    }
};