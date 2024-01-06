// to check if graph is bipartite
// meaning we can divide the graph into 2 disjoint sets
int col[];
bool vis[];
vector<int>adj[];
bool dfs(int node,int color){
    vis[node]=true;
    col[node]=color;
    for(int child:adj[node]){
        if(!vis[child]){
            if(!dfs(child,color^1)){
                return false;
            }
        }
        else{
            if(col[child]==col[node]){
                return false;
            }
        }
    }
    return true;
}