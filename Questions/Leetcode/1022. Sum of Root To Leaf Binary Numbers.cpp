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


// When we are moving downwards a bit is getting added to the LSB position for each level. Which is just left shifting the value at previous level. This will give LSB as 0.
// Now, LSB will be 1 if current node's value is 1. So we just need to bitwise OR with current value(obtained after leftshifting).
// After reaching the leaf node, we will automatically have the path sum and there is no additional need for any mathematical operation.
class Solution {
public:
    int ans = 0;
    TreeNode* dfs(TreeNode* p,int n){
        if(!p){
            return NULL;
        }
        n<<=1;
        if(p->val){
            n|=1;
        }
        TreeNode* l = dfs(p->left,n);
        TreeNode* r = dfs(p->right,n);
        if(!l && !r){
            ans+=n;
        }
        return p;
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};