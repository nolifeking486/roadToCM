//min heap
//brute force
//although question says that the set is infinite but
//acc to constraints max num is 1000
//initially all 1000 nums are in the set
// keeping visited to minimize average time
// only insert element when it is not inside and needs to be added
class SmallestInfiniteSet {
public:
    bool vis[1001];
    priority_queue<int,vector<int>,greater<int>>q;
    SmallestInfiniteSet() {
        memset(vis,1,sizeof(vis));
        for(int i=1;i<1001;i++){
            q.push(i);
        }
    }

    int popSmallest() {
        int curr = q.top();
        q.pop();
        vis[curr]=false;
        //cout << curr << endl;
        return curr;

    }

    void addBack(int num) {
        if(vis[num]){
            return;
        }
        //cout << num << endl;
        q.push(num);
        vis[num]=true;

    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */