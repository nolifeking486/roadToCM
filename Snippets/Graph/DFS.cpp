void dfs(int node, vector<int> adj[],vector<int>&vis){
    vis[node]=true;
    for(int child: adj[node]){
        if(!vis[child]){
            dfs(child,adj,vis);
        }
    }
}
