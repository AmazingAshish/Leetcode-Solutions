// Last updated: 7/19/2026, 10:22:14 PM
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
    void helper(vector<int>& res, TreeNode* root, int d)
{
    if (!root)
        return;
 
    if (d == res.size())
        res.push_back(root->val);
 
    else
        res[d] = max(res[d], root->val);
    helper(res, root->left, d + 1);
    helper(res, root->right, d + 1);
}
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
    helper(res, root, 0);
    return res;
    }
};