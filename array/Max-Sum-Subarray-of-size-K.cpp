class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        if(arr.size()<k){
            return -1;
        }
        int windowsum=0;
        int maxsum=0;
        
        for(int i=0; i<k; i++){
            windowsum+= arr[i];
        }
        
        maxsum=windowsum;
        
        for(int i=k; i<arr.size(); i++){
            windowsum=windowsum + arr[i] - arr[i-k];
            maxsum=max(windowsum, maxsum);
        }
        return maxsum;
    }
};
