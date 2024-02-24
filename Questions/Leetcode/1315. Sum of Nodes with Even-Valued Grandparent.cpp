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


// dfs
// we just check at each level if par was even
// if so, we add the curr node's children to the ans;

class Solution {
public:
    int ans=0;
    int dfs(TreeNode* node, int par, int lvl){
        if(!node){
            return 0;
        }
        int l = dfs(node->left,node->val,lvl+1);
        int r = dfs(node->right,node->val,lvl+1);
        if(lvl>0){
            if(par%2==0){
                ans+= (l+r);
            }
        }

        return node->val;
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root,-1,0);
        return ans;
    }
};