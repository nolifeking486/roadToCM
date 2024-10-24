//implementation, logic
//intuition is to use priority queue to manage sorting
//trick is to minimize the number of operations to find median
//for that we can use 2 priority queues
//such that the top element of any or both of them will lead to median
//also we need to make sure that before we return median
//we balance the two halves


class MedianFinder {
public:

    priority_queue<int>l;
    priority_queue<int,vector<int>,greater<int>>r;
    MedianFinder() {

    }

    void addNum(int num) {

        //maintain sorting
        if(l.empty() || l.top()>=num){
            l.push(num);
        }
        else{
            r.push(num);
        }
    }

    double findMedian() {
        int k = l.size()-r.size();
        if(k<0){
            for(int i=0;i<abs(k)/2;i++){
                int cur = r.top();
                r.pop();
                l.push(cur);
            }
        }else{
            for(int i=0;i<abs(k)/2;i++){
                int cur = l.top();
                l.pop();
                r.push(cur);
            }

        }

        double ans = 0;

        if(l.size()==r.size()){
            int x = l.top();
            int y = r.top();
            ans = (double)(x+y)/2;
        }
        else if(r.size()>l.size()){
            int y = r.top();
            ans = (double) y;
        }
        else{
            int x = l.top();
        //int y = r.top();
            ans = (double) x;
        }
        return ans;


    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */