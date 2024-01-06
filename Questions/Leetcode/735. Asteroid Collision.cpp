//stack, implementation
//we can use the final ans vector itself as stack to minimize memory
//using pop and push efficiently
//Need to handle corner cases properly
//basic idea is to check if i th asteroid going in the same direction or opposite
// to i-1 th asteroid
// if collision will be there then check which one is bigger based on magnitude
// and accordingly maintain ans
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int>q;
        for(auto child:a){
            if(child>0 || q.size()==0){
                q.push_back(child);
                continue;
            }
            //cout << " bakchodi" <<endl;
            int curr = abs(child);
            bool flag = false;
            while(q.size()>0){
                int temp = q[q.size()-1];
                //cout << temp << endl;
                if(temp<0)break;
                if(temp>curr){
                    flag=true;
                    break;
                }
                else if(temp==curr){
                    flag=true;
                    q.pop_back();
                    break;
                }
                else{
                    q.pop_back();
                }
            }
            if(!flag){
                q.push_back(child);
            }

        }
        return q;
    }
};