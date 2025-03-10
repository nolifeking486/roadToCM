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

//dfs,implementation
//if we are deleting a node then we just return null
//otherwise we return original node
//now for each parent node we set the updatet left and right child's in parent node
class Solution {
public:
    TreeNode * dfs(TreeNode* node, int target){
        if(!node){
            return NULL;
        }
        TreeNode* l = dfs(node->left,target);
        TreeNode* r = dfs(node->right,target);
        node->left = l;
        node->right = r;

        if(l==NULL && r==NULL){
            if((node->val)==target){
                return NULL;
            }
        }
        return node;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return dfs(root,target);

    }
};