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


// brute force, implementation, dfs
// when we are reconstructing tree at that time itself
// we can store the new nodes in the tree into a map so that find operation is optimized

class FindElements {
public:
    map<int,bool>a;
    void dfs(TreeNode* node,int pval, int dir){
        if(!node){
            return;
        }
        node->val = 2*pval + dir;
        a[node->val]=true;
        dfs(node->left,node->val,1);
        dfs(node->right,node->val,2);

    }

    FindElements(TreeNode* root) {
        root->val=0;
        dfs(root->left,0,1);
        dfs(root->right,0,2);
        a[0]=true;
    }

    bool find(int target) {
        return a[target];
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */