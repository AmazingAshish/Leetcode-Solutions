// Last updated: 7/19/2026, 10:24:23 PM
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
    int find(TreeNode* root){
        if(root==NULL)
        return 0;

        int lh=find(root->left);
        int rh=find(root->right);

        if(lh==-1 || rh==-1)
        return -1;
        

        if(abs(lh-rh)>1)
        return -1;

        return 1+max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        int fact=find(root);
        if(fact==-1) return 0;
        return 1;
    }
};