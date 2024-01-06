//UNDIRECTED GRAPH
//Just check if there is any back edge
//back edge implies ancestor to grandchild
bool vis[];
vector<int>adj[];
bool dfs(int node, int parent){
    vis[node]=true;
    for(int child:adj[node]){
        if(!vis[child]){
             if(dfs(child,node)){
                return true;
             }
        }
        else{
            //this is checking that we are not in the call of the child and that ancestor, parent and child are all different
            if(parent!=child){
                return true;
            }

        }
    }
    return false;
}
