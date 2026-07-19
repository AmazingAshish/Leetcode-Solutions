// Last updated: 7/19/2026, 10:19:56 PM
class Solution {
private:
    int sum = 0;

    void traverse(TreeNode* root) {
        if (root) {
            traverse(root->right);  // Traverse the right subtree
            sum += root->val;  // Update the sum
            root->val = sum;  // Update the current node's value
            traverse(root->left);  // Traverse the left subtree
        }
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        traverse(root);
        return root;
    }
};