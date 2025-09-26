class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int fpivot = 0;
        vector<int>a,b;
        for(auto child:nums){
            if(child<pivot){
                a.push_back(child);
            }else if(child==pivot){
                fpivot++;
            }else{
                b.push_back(child);
            }
        }
        while(fpivot--){
            a.push_back(pivot);
        }
        for(auto child:b){
            a.push_back(child);
        }
        return a;
    }
};