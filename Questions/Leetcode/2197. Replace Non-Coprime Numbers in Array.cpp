
//brute force implementation

class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        if(nums.size()==1)return nums;
        stack<int>q;
        for(int i=0;i<nums.size();i++){
            
            long long int t = nums[i];
            
            bool ansf = false;
            while(!q.empty() && !ansf){
                int l = q.top();
                
                int g2 = __gcd(l,(int)t);
                if(g2==1){
                    q.push(t);
                    ansf = true;
                    break;
                }
                q.pop();
                t = t * l/g2;
            }
            if(!ansf){
                q.push((int)t);
            }


        }
        vector<int>ans;
        while(!q.empty()){
            int temp = q.top();
            ans.push_back(temp);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};