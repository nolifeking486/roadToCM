// time complexity : O(n*logn)
// we need 2 things at ANY time
// current max of sliding window and if the elements in sliding window are still there
// or the sliding window has moved forward
// We can handle this easily using max heap
// keep a priority_queue of {element, index} and before getting the ans of current window check if the 
// top element of pq is still inside the current window.
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1)return nums;
        vector<int>ans;
        
        int l=0;
        priority_queue<pair<int,int>>q;
        while(l<k){
            q.push({nums[l],l});
            l++;
        }
        l=0;
        ans.push_back(q.top().first);
        for(int r=k;r<nums.size();r++){
            l++;
            q.push({nums[r],r});
            while(!q.empty()){
                auto t = q.top();
                if(t.second<l){
                    q.pop();
                }
                else{
                    break;
                }
            }
            ans.push_back(q.top().first);
        }
        return ans;
    }
};

//NOTE
// time complexity O(n)
// Approach 2 using dequeue:
// keep only element indices inside dq 
// if element is not in curr sliding window pop from front
// if curr max is smaller than new element , pop from back.