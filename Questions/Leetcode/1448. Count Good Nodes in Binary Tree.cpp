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
// preorder
// for a node X, in the path till X, there will be only one max value
// if our node is greater than that then it is good
class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* node, int c){
        if(!node){
            return;
        }
        if(c<= node->val){
            ans++;
        }
        c= max(c,node->val);
        dfs(node->left,c);
        dfs(node->right,c);
    }
    int goodNodes(TreeNode* root) {
        int curMax = INT_MIN;
        dfs(root,curMax);
        return ans;
    }
};