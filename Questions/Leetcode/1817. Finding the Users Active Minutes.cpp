//basic implementation, map, data structure
//we can't use dsu because one; there is many to many mapping and second; if we
// try to maintain visited array for eliminating duplicate edges we will run into memory issues
// due to constraint

//Approach
//we want the number of active users for distinct number of minutes not each minute
//so we can just store the DISTINCT active minutes for each user in a DS
//then we just return the count of for distinct number of minutes to distinct users
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {

        vector<int>ans(k,0);
        //user id, distinct active minutes;
        unordered_map<int,unordered_set<int>>a;

        for(auto child :logs){
            a[child[0]].insert(child[1]);
        }
        for(auto child:a){

            ans[child.second.size()-1]++;
        }
        return ans;

    }
};