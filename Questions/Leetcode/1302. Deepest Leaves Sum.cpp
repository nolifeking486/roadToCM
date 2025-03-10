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

//bfs, map
//just store the sum of all nodes on each level in a map
//the deepest level has to be leafs as well
// so just return the sum of last level
class Solution {
public:
    map<int,int>a;


    int deepestLeavesSum(TreeNode* root) {
        //map lvl,node
        queue<pair<TreeNode*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto child = q.front();
            q.pop();
            TreeNode* cnode = child.first;
            int level = child.second;
            a[level]+=cnode->val;
            if(cnode->right){
                q.push({cnode->right,level+1});
            }
            if(cnode->left){
                q.push({cnode->left,level+1});
            }
        }
        auto it = a.rbegin();
        return it->second;
    }
};