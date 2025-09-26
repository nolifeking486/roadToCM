// basically double stack
// main logic: when we insert a new minimum from that point onwards the new minimum will be applicable
// so if we pop this element, we just revert to the immediate previous minimum


class MinStack {
public:
    //element, min upto this point
    vector<pair<int,int>>q;
    MinStack() {
        
    }
    
    void push(int val) {
        int n=q.size();
        if(n){
            q.push_back({val,min(val,q[n-1].second)});
        }else{
            q.push_back({val,val});
        }
    }
    
    void pop() {
        q.pop_back();
        
    }
    
    int top() {
        return q[q.size()-1].first;
    }
    
    int getMin() {
        return q[q.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */