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
// just calc all the leaf nodes using preorder
// and check if they are same for both trees
class Solution {
public:
    void preorder(TreeNode* node,vector<int>&x){
        if(!node->left && !node->right){
            x.push_back(node->val);
            return;
        }
        if(node->left)preorder(node->left,x);
        if(node->right)preorder(node->right,x);

    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        vector<int>b;
        preorder(root1,a);
        preorder(root2,b);
        if(a.size()!=b.size()){
            return false;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])return false;
        }
        return true;

    }
};