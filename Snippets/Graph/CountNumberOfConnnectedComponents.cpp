//Undirected
int cc=0;
for(int i=0;i<vis.size();i++){
    if(!vis[i]){
        cc++;
        dfs(i);
    }
}

//------------------------------------------------