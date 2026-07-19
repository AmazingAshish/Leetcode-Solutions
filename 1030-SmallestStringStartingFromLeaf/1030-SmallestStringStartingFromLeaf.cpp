// Last updated: 7/19/2026, 10:20:08 PM
class Solution {
public:
    void rec(TreeNode *root, string curr,string &ans){
        string currstring = curr;
        currstring+=('a' + root->val);
        if(!root->left && !root->right){
            string temp = currstring;
            reverse(temp.begin(),temp.end());
            if(ans==""){
                ans = temp;
            }
            else{
                // if(ans.length()>temp.length() || (ans.length()==temp.length() && temp<ans)) ans = temp;
                if(temp<ans) ans = temp;
            }
        }
        else{
            if(root->left) rec(root->left,currstring,ans);
            if(root->right) rec(root->right,currstring,ans);
        }
        return;
    }
    string smallestFromLeaf(TreeNode* root) {
        if(!root) return "";
        string ans="";
        rec(root,"",ans);
        return ans;
    }
};