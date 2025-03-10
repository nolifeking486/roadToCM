//brute force, implementation

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        //int curr = -1;
        int ans = 0;
        int full = capacity;
        for(int i=0;i<plants.size();i++){
            if(capacity>=plants[i]){
                ans++;
                capacity-= plants[i];
                continue;
            }
            ans+= 2*i+1;
            capacity = full-plants[i];


        }
        return ans;
    }

//   -1 / 2 2 3 3
//    5   3 1

};