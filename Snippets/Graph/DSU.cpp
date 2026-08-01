class Solution {
public:
    int find(int a,vector<int>&par){
        if(par[a]<0){
            return a;
        }
        return par[a]=find(par[a],par);
    }
    void merge(int a, int b, vector<int>&par){
        if(a<=b){
            par[b]=a;
        }else{
            par[a]=b;
        }

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int>par(n,-1);
        for(auto child:edges){
            int u = find(child[0],par);
            int v = find(child[1],par);

            if(u!=v){
                merge(u,v,par);
            }

        }
        return par[source]==par[destination];

    }
};