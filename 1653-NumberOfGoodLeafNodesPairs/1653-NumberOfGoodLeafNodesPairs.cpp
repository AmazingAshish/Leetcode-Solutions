// Last updated: 7/19/2026, 10:17:51 PM
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
private:
    int res = 0;
public:
    int countPairs(TreeNode* root, int distance) {
        if (!root->left && !root->right) {
            return 0;
        }


        travel(root, distance);
        /*
        vector<int> l = travel(root->left, distance);
        vector<int> r = travel(root->right, distance);

        for (int i = 0; i < l.size(); i++) {
            ++l[i];
        }
        for (int j = 0; j < r.size(); j++) {
            ++r[j];
        }

        for (int i = 0; i < l.size(); i++) {
            cout << l[i] << " ";
        }
        cout << ", ";
        for (int j = 0; j < r.size(); j++) {
            cout << r[j] << " ";
        }
        cout << endl;

        for (int i = 0; i < l.size(); i++) {
            for (int j = 0; j < r.size(); j++) {
                if (l[i] + r[j] <= distance + 1) {
                    res++;
                }
            }
        }
        */

        return res;
    }

    vector<int> travel(TreeNode* root, int distance) {
        if (!root) {
            return vector<int> (0, 0);
        }

        if (!root->left && !root->right) {
            return vector<int> (1, 0);
        }

        vector<int> l = travel(root->left, distance);
        vector<int> r = travel(root->right, distance);
        for (int i = 0; i < l.size(); i++) {
            ++l[i];
        }
        for (int j = 0; j < r.size(); j++) {
            ++r[j];
        }

        for (int i = 0; i < l.size(); i++) {
            for (int j = 0; j < r.size(); j++) {
                if (l[i] + r[j] <= distance) {
                    res++;
                }
            }
        }

        vector<int> length(l.size() + r.size(), 0);

        int index = 0;

        for (; index < l.size(); index++) {
            length[index] = l[index]; 
        }

        for (; index < length.size(); index++) {
            length[index] = r[index - l.size()];
        }

        return length; 
    }
};