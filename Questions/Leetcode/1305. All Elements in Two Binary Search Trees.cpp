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

 //Tree, BST basics
 //Final ans should be union of all elements sorted
 //We know inorder of BST is sorted
 //So we just find inorder of both the trees and merge them
 // O(N)
class Solution {
public:
    vector<int>inorder;
    void dfs(TreeNode* node){
        //inorder
        if(!node)return;

        dfs(node->left);
        inorder.push_back(node->val);
        dfs(node->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;

        inorder.clear();
        dfs(root1);

        a = inorder;
        inorder.clear();
        dfs(root2);
        b = inorder;
        int m = a.size();
        int n = b.size();
        vector<int>ans;

        int l=0,r=0;
        while(l<m && r<n){
            if(a[l]<b[r]){
                ans.push_back(a[l]);
                l++;
            }else{
                ans.push_back(b[r]);
                r++;
            }
        }
        while(l<m){

                ans.push_back(a[l]);
                l++;

        }
        while(r<n){

                ans.push_back(b[r]);
                r++;

        }
        return ans;


    }
};