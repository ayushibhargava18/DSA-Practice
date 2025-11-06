class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int maxelement=*max_element(arr.begin(), arr.end());
        
        vector<int> countsort(maxelement+1, 0);
        for(auto i:arr){
            countsort[i]++;
        }
        
        int cum=0;
        for(int i=0; i<=maxelement; i++){
                cum=cum+countsort[i];
                if(cum>=k){
                    return i;
                }
        }
        return -1;
        
    }
};
