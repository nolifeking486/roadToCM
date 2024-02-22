//kind of brute force,implementation
//we need distinct elements in each row
//so if an element is appearing multiple times
//we need that many rows
//so maximum rows will be the maximum frequency
//now we just need to put all the numbers in different rows
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>f;
        for(auto child:nums){
            f[child]++;
        }

        int max_frequency = 0;
        int element = 0;
        for(auto child:f){
            if(child.second>max_frequency){
                max_frequency = child.second;
                element = child.first;
            }
        }
        vector<vector<int>>ans(max_frequency,vector<int>(1,element));

        f[element]=0;
        for(auto child:f){
            for(int i=0;i<child.second;i++){
                ans[i].push_back(child.first);
            }
        }
        return ans;




    }
};