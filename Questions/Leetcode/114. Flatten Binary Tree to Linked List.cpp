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

// Just do a normal preorder traversal but while returning we will return the last node(in preorder) from each subtree(left and right).
// Then we just alter the connections in the correct sequence:

// root -> flattened left subtree -> flattened right subtree;

// implies, the right child of last node in preorder of left subtree will be the right subtree of root node(at any level of recursion).
// And, the left subtree of root will become the right subtree.

// Also, account for any NULL returns.
class Solution {
public:
   // TreeNode* q = root;
    TreeNode* preorder(TreeNode* p){
        if(!p){
            return NULL;
        }
        //lowest nodes
        TreeNode* l = preorder(p->left);
        TreeNode* r = preorder(p->right);
        if(!l && !r){
            return p;
        }
        if(!r){
            p->right = p->left;
            p->left = NULL;
            return l;
        }
        if(!l){
            return r;
        }
        l->right = p->right;
        p->right = p->left;
        p->left = NULL;
        
        return r;

    }
    void flatten(TreeNode* root) {
        preorder(root);
        
    }
};