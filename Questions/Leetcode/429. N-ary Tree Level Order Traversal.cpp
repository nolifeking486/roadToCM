/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root){
            return {};
        }
        vector<vector<int>>a(1000);
        queue<pair<Node*,int>>q;
        q.push({root,0});
       // a[0].push_back(1);
        int h = 0;
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            h = max(h,cur.second);
            a[cur.second].push_back(cur.first->val);
            for(auto child:cur.first->children){
                q.push({child,cur.second+1});
            }
        }
        a.resize(h+1);
        //a.shrink_to_fit();


        return a;
    }
};