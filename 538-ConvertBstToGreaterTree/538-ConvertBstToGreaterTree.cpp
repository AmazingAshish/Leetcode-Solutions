// Last updated: 7/19/2026, 10:22:10 PM
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
    void inorderTraversal(TreeNode* root, vector<int> &inorder) {   //T.C --> O(n)

        if(!root)
            return;
        
        //L
        inorderTraversal(root -> left, inorder);

        //N
        inorder.push_back(root -> val);

        //R
        inorderTraversal(root -> right, inorder);
    }

    void updateBST(TreeNode* root, vector<int> &inorder, int &index) {  // T.C --> O(n)
    
        if(root == NULL)
            return;
        
        //L
        updateBST(root -> left, inorder, index);

        //N
        root -> val = inorder[index++];

        //R
        updateBST(root -> right, inorder, index);
    }

public:
    TreeNode* convertBST(TreeNode* root) {  // T.C --> O(n)  ||  S.C --> O(n) + O(logn)
        
        vector<int> inorder;    //S.C --> O(n)
        
        inorderTraversal(root, inorder);

        int n = inorder.size();

        for(int i = (n-2); i >= 0; i--)     // T.C --> O(n)
            inorder[i] += inorder[i+1];

        int index = 0;

        updateBST(root, inorder, index);

        return root;
    }
};