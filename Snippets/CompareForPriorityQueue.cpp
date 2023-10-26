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

//this will keep the greater integer on top in priority_queue and if ints are same valued then
// lexicographically smaller string will be kept above

// priority_queue<pair<int,string>,vector<pair<int,string>>,Compare>q;
