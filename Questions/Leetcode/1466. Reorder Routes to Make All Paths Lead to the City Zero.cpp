//My approach:
//create an undirected graph from given connections
//since this graph will have only 1 CC if we do dfs from 0 we will be able to visit all nodes
//before dfs we also create a map of edges
//while performing dfs we just need to check, if edge from child->node is present in map
//if it is not present => this edge needs to be reversed so count++


//Same approach can be done in an optimal way by storing reverse edges as negative numbers in the graph
//while calling dfs we will call on abs() but store children as negative
//
class Solution {
public:
    map<string,bool>edge;

    int ans;
    void dfs(int node,vector<int>a[],bool vis[]){
        vis[node]=true;
        for(auto child : a[node]){
            if(!vis[child]){
                string key = to_string(child)+" "+to_string(node);
                auto it = edge.find(key);
                if(it==edge.end()){
                    ans++;
                }
                dfs(child,a,vis);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int>a[n];
        bool vis[n];
        memset(vis,0,sizeof(vis));

        for(auto child : connections){
            int u = child[0];
            int v = child[1];
            a[u].push_back(v);
            a[v].push_back(u);
            string key = to_string(u)+" "+to_string(v);
            edge[key]=true;


        }
        dfs(0,a,vis);
            return ans;

    }
};