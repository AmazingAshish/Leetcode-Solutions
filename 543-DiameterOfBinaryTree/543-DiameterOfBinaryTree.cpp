// Last updated: 7/19/2026, 10:22:07 PM
class Solution {
public:
    int maxDiameter = 0;

    int dfs(TreeNode* root) {
        if (root == NULL) return 0;

        int leftHeight = dfs(root->left);
        int rightHeight = dfs(root->right);

        maxDiameter = max(maxDiameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDiameter;
    }
};
