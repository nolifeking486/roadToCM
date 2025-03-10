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

 //dfs(node, max, min)
 //we need to maximise the abs diff between any node and it's subtree
 //so when traversing down we can just see if current node will contribute in the final ans or not
 //for that it has to be either max of the subtree or min of the subtree
 //but we can't take difference of right and left child in the same subtree.
class Solution {
public:
    int ans = 0;
    void dfs(TreeNode* node,int mx, int mn){
        if(!node){
            return;
        }
        int t = node->val;
        ans = max(ans,max(abs(t-mn),abs(t-mx)));
        dfs(node->left,max(t,mx),min(t,mn));
        dfs(node->right,max(t,mx),min(t,mn));

    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val);
        return ans;

    }
};