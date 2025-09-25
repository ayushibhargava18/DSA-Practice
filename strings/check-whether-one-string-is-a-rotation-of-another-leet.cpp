class Solution {
public:
    bool rotateString(string s, string goal) {
            if(s.size()==goal.size()){
                string x=s+s;
                if(x.find(goal)!=-1){
                    return true;
                }
                
            }
            return false;
    }
};
