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
    int maxi(TreeNode*root) {
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)return 1;
        int lh=INT_MIN;
        int rh=INT_MIN;
        if(root->left) lh=maxi(root->left);
        if(root->right) rh=maxi(root->right);
        return 1+max(rh,lh);
    }
    int maxDepth(TreeNode* root) {
        return maxi(root);
    }
};