class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int result = arr[n-1]-arr[0];
        
        for(int i=1; i<arr.size(); i++){
            
            if(arr[i]-k<0){
                continue;
            }
            
            int mini = min(arr[i]-k, arr[0]+k);
            int maxi = max(arr[n-1]-k, arr[i-1]+k);
            result=min(result, maxi-mini);
            
        }
        return result;
        
    }
};
