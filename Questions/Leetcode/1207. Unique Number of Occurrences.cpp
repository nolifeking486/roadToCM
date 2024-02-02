// kind of brute
// first find all the frequencies of elements
// then out of that we want to check if the frequencies are unique or not
// so easy implementation is to just find frequency of the frequencies
// and check if there is any repetition
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>counts;
        for(auto child:arr){
            counts[child]++;
        }
        map<int,int>freq;
        for(auto child:counts){
            freq[child.second]++;
        }
        for(auto child:freq){
            if(child.second>1){
                return false;
            }
        }
        return true;


    }
};