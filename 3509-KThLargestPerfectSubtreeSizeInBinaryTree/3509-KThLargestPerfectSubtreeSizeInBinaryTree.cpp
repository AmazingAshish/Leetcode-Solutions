// Last updated: 7/19/2026, 10:11:24 PM
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
    priority_queue<int, vector<int>, greater<int>> pq;

    int dfs(TreeNode* root, int k) {
        if (!root) return 0;  // Null nodes are considered perfect subtrees of size 0
        int x = dfs(root->left, k), y = dfs(root->right, k);
        // If either subtree is not perfect, or their sizes are different
        if (x == -1 || y == -1 || x != y)
            return -1;
        pq.push(1 + x + y);
        // Maintain a min-heap of size K
        while (pq.size() > k) pq.pop();
        return 1 + x + y;
    }

    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        dfs(root, k);
        // If we have fewer than K perfect subtrees, return -1
        if (pq.size() < k) return -1;
        return pq.top();
    }
};