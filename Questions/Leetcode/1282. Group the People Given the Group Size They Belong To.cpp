//brute force, implementation
//first group numbers based on group sized
//this can be done using map
//then create vectors of group sizes and put that many numbers into vectors till that group size mapping
//has no numbers left



//another approach could be to sort based on group size using vector<pair<int,int>>


class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        //map<size,numbers>
        //baadmein ans from map
        map<int,vector<int>>a;

        for(int i=0;i<g.size();i++){
            a[g[i]].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto child:a){
            vector<int>b = child.second;
            vector<int>temp;
            int c = 0;
            while(!b.empty()){
                int curr = b[b.size()-1];
                b.pop_back();
                temp.push_back(curr);
                c++;
                if(c==child.first){
                    ans.push_back(temp);
                    temp.clear();
                    c=0;
                }

            }
        }
        return ans;
    }
};