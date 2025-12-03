class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int l=INT_MAX;

        int left=0;

        for(int right=0; right<nums.size();right++){
            sum=sum+nums[right];
            while(sum>=target){
                l=min(l, right-left+1);
                sum=sum-nums[left];
                left++;
            }

        }
        return (l == INT_MAX) ? 0 : l;

    }
};
