class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]=1;
        int prefixsum=0;
        int count=0;

        for(int i=0; i<nums.size(); i++){
            prefixsum=prefixsum+nums[i];

            if(map.find(prefixsum-k)!=map.end()){
                count=count+map[prefixsum-k];
            }

            map[prefixsum]++;

            
        }
        return count;
    }
};
