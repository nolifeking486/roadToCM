// implementation, two pointer
// map for maintaining levels, for iterating top to bottom and vice versa 
// flag taken to reverse direction



class Solution {
public:
    string convert(string s, int numRows) {
        map<int,string>a;
        //int j=0;
        bool flag = false;
        int count = 1;
        for(int i=0;i<s.length();i++){
            a[count].push_back(s[i]);
           // cout << count<< " " << s[i] << endl;
            if(!flag){
                count++;
                if(count==numRows){
                    flag=true;
                    //count--;
                    
                }
                //continue;
            }else{
                count--;
                if(count==1){
                    flag=false;
                    //count++;
                    
                }
                //continue;
                
            }
                        
        }

        string ans="";

        for(auto child: a){
             ans = ans + child.second;
            //cout <<child.first << " "<< child.second << endl;
        }

        return ans;
        
    }
};