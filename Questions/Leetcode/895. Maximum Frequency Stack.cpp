//every time we push we will increase the freq of that number
//also we will push that element into the stack(vector) of that freq(new)
//we also need to update the current number which we are updating till now since
//there could be a chance that either max freq has changed or element at the top with max freq has changed


//when we pop
//we will update freq of ans
//we will remove last element of max freq
//when we do this we need to check that number of elements of max freq has become 0 or not
//also we need to update our new current max element(num)



class FreqStack {
public:

    //frequency of elements
    map<int,int>a;

    //frequency vs which elements are there for that frequency
    map<int,vector<int>>q;

    //number with required conditions
    int num=0;
    FreqStack() {


    }

    void push(int val) {

        a[val]++;
        int index = a[val];
        q[index].push_back(val);

        auto it = q.rbegin();
        int t = (it->second).size();
        num = (it->second)[t-1];


    }

    int pop() {
        //cout << "hello" << endl;
        int index = a[num];
        //cout << index << endl;
        int ans = num;

        q[index].pop_back();
        a[num]--;
        auto it = q.end();
        it--;
        if((it->second).size()==0){
            q.erase(it);
            it--;
        }
        if(q.size()){
            int t = (it->second).size();
            num = (it->second)[t-1];
        }

        //
        //cout << num << endl;
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */