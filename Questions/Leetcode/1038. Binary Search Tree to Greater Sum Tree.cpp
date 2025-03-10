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

//BST basics, suffix sum
//we need the sum of all the nodes greater than the current node and add the sum to it's val
//which means we need all the nodes which are to the right of current node in inorder
//we can do this optimally using suffix sum on inorder traversal
//also we can store pointers to node's so that while calculating suffix sum
//the tree will convert to greater sum tree at the same time

class Solution {
public:
    vector<TreeNode*>inorder;
    void dfs(TreeNode* node){
        if(!node){
            return;
        }
        dfs(node->left);
        inorder.push_back(node);
        dfs(node->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        dfs(root);
        int n = inorder.size();
        for(int i=n-2;i>=0;i--){
            inorder[i]->val += inorder[i+1]->val;
        }
        return root;

    }
};