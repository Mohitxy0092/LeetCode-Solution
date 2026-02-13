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
    bool func(Node*root) {
        if(!root) return true;
        if(!(root->left)  && !(root->right))return true;
        int sum=0;
        if(root->left) sum+=root->left->data;
        if(root->right) sum+=root->right->data;
        
        return ((sum==root->data) && func(root->left) && func(root->right));
    }
    bool isSumProperty(Node *root) {
        // code here
        return func(root);
    }
};