class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        int n=arr.size();
        unordered_set<int> hash;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        
        for(int i=0; i<n; i++){
            maxi=max(arr[i], maxi);
            mini=min(arr[i], mini);
            hash.insert(arr[i]);
        }
        int count=0;
        int diff=(maxi-mini)/(n-1);
        
        while(hash.find(maxi)!=hash.end()){
            count++;
            maxi=maxi-diff;
        }
        if(count==n){
            return true;
        }
        return false;
    }
};
