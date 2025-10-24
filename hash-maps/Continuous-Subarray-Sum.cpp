class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]=-1;
        int prefixsum=0;

        for(int i=0;i<nums.size();i++){
            prefixsum=prefixsum+nums[i];
            if(k!=0){
                prefixsum=prefixsum%k;
            }
            if(map.find(prefixsum)!=map.end()){
                if(i-map[prefixsum]>=2){
                    return true;
                }
            }
            else{
                map[prefixsum]=i;
            }
        }
        return false;

    }
};
