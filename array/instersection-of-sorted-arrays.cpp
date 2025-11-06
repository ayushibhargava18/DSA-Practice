//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int i=0; 
        int j=0;
        
        vector<int> result;
        
        while (i<a.size() && j<b.size()){
            if(i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
            else if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                result.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        
        return result;
    }
};
