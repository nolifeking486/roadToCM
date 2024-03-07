// brute force , maths
// we need to make all the elements equal to average/middle element
// which will be equal to n always
// it need not exist in the array in the beginning
// now the number of operations to make two elements equal to n will be n-(ith element)
class Solution {
public:
    int minOperations(int n) {

        int ans=0;
        for(int i=1;i<=n;i+=2){
            ans+= (n-i);
        }
        return ans;

    }
};