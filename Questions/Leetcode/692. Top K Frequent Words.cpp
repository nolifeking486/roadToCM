class Compare{
    public:
    bool operator()(pair<int,string>a,pair<int,string>b){
        if(a.first<b.first){
            return true;
        }
        else if(a.first>b.first){
            return false;
        }
        else{
            return a.second>b.second;
        }
    }
};

// standard priority_queue question
// only needed to calculate frequency first 
// also custom comparator using operator overloading had to be implemented
// to simplify implementation

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>a;
        for(auto child:words){
            a[child]++;
        }
        //max int and min string
        priority_queue<pair<int,string>,vector<pair<int,string>>,Compare>q;
        auto it = a.begin();
        while(it!=a.end()){
            q.push({it->second,it->first});
            it++;
        }
        vector<string>ans;
        while(!q.empty() && k>0){
            ans.push_back(q.top().second);
            q.pop();
            k--;
        }
        return ans;
        
        

    }
};