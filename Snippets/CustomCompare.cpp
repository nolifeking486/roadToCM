// sort matrix on kth column

class Compare{
    public:
    int k;
    Compare(int k){
        this->k = k;
    }
    bool operator()(vector<int>a,vector<int>b){
        if(a[k]>b[k]){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        sort(score.begin(),score.end(),Compare(k));
        return score;
    }
};