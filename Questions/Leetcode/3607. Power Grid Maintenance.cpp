//dsu, implementation, connected components
//approach is brute force

class Solution {
public:
    int find(int a,vector<int>&par){
        if(par[a]<0){
            return a;
        }
        return par[a] = find(par[a],par);
    }
    void merge(int a,int b, vector<int>&par){
        if(a<=b){
            par[b]=a;
        }
        else{
            par[a]=b;
        }
    }
    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        vector<int>par(c+1,-1);
        vector<bool>isonline(c+1,true);
        for(auto child:connections){
            int u = find(child[0],par);
            int v = find(child[1],par);
            if(u!=v){
                merge(u,v,par);
            }
        }
        //need to do this again for uniformity
        //otherwise connected components will not be formed properly
        for(int i=1;i<c+1;i++){
            if(par[i]<0){
                continue;
            }
            par[i]=find(i,par);
        }
        //this is basically connected components
        //priority queue for min id
        map<int,priority_queue<int,vector<int>,greater<int>>>cc;
        for(int i=1;i<c+1;i++){
            if(par[i]<0){
                cc[i].push(i);
            }else{
                cc[par[i]].push(i);
            }
        }
        
        vector<int>ans;
        for(auto child:queries){
            if(child[0]==2){
                isonline[child[1]]=false;
            }else{
                int node = child[1];
                if(isonline[node]){
                    ans.push_back(node);
                }else{
                    int key = par[node];
                    if(par[node]<0){
                        key=node;
                    }
                    int currAns = -1;
                    //once a station goes offline it will never come online
                    //so need to keep them in queue and check only once
                    while(!cc[key].empty()){
                        int cstation = cc[key].top();
                        if(isonline[cstation]){
                            currAns=cstation;
                            break;
                        }
                        cc[key].pop();
                        
                    }
                    ans.push_back(currAns);
                }
            }
        }
        return ans;

    }
};