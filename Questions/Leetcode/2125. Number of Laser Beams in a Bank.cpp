// brute force, implementation
// only need to count lasers at each level
// given condition is that from level i to level j lasers can be formed
// only if there is no level k such that i<k<j and count[k]>0;

// so number of lasers between i and j will be count[i]*count[j]

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>counts(bank.size(),0);

        for(int i=0;i<bank.size();i++){
            for(auto child: bank[i]){
                if(child=='1'){
                    counts[i]++;
                }
            }
        }
        int ans = 0;

        int t=0;
        for(int i=0;i<counts.size();i++){
            if(t>0){
                ans+= (t*counts[i]);

            }
            if(counts[i]>0){
                t=counts[i];
            }



        }

        return ans;


    }
};