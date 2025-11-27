class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> map;

        for(int i=0;i<nums.size();i++){

            int rest=target-nums[i];

            if(map.count(rest)){
                result.push_back(i);
                result.push_back(map[rest]);
            }

            map[nums[i]]=i;
            
        }
        return result;
    }
};
