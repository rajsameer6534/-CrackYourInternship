// leetcode 101. Symmetric Tree


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p==NULL && q==NULL) return true;
    if(p==NULL || q==NULL) return false;
    if(p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    TreeNode* invertTree(TreeNode* root) {
    if(root==NULL) return root;
    TreeNode* temp = root->left;
    root->left = root->right; root->right = temp;
    invertTree(root->left); invertTree(root->right);
    return root;
    }
    bool isSymmetric(TreeNode* root) {
    if(root==NULL) return true;
    invertTree(root->left);
    bool flag = isSameTree(root->left,root->right);
    invertTree(root->left);
    return flag;//Return the result of the symmetry check.
    // If the left and right subtrees are the same, the 
    //tree is symmetric, so return true; otherwise, return false.
    }
};