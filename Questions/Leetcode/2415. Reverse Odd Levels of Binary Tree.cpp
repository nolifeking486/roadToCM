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

//BFS
//store odd level nodes in map
//then iterate over each vector in map and reverse the vals

//optimisations are possible
//no need to store elements in map
//during bfs we can use deque and maintain it such that
//at any instant only single level nodes are present
//after processing each level we then do normal bfs i.e. push nodes in deque
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        map<int,vector<TreeNode*>>a;

        queue<pair<int,TreeNode*>>q;

        q.push({0,root});

        while(!q.empty()){
            auto child = q.front();
            q.pop();
            if(child.first%2!=0){
                a[child.first].push_back(child.second);

            }
            if(child.second->left){
                q.push({child.first+1,child.second->left});
            }
            if(child.second->right){
                q.push({child.first+1,child.second->right});
            }

        }
        for(auto child:a){
            int r = child.second.size()-1;
            int l=0;
            while(l<r){
                swap(child.second[l]->val,child.second[r]->val);
                l++;
                r--;
            }

        }
        return root;

    }
};