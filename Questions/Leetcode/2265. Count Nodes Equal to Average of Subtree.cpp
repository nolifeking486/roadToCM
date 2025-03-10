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


//brute force, dfs on tree
//count nodes in subtree
//take sum of nodes in subtree
//take avg
//compare

class Solution {
public:
    // sum, count node in subtree
    int ans = 0;
    pair<int,int> dfs(TreeNode* node){
        if(!node){
            return {0,0};
        }
        auto lchild = dfs(node->left);
        auto rchild = dfs(node->right);
        int sum = lchild.first+rchild.first+ (node->val);
        int count = rchild.second+lchild.second+1;

        int avg = sum/count;

        if(avg==(node->val)){
            ans++;
        }
        return {sum,count};

    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};