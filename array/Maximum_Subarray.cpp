class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int currenttotal=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            currenttotal=max(nums[i], currenttotal+nums[i]);
            sum=max(currenttotal, sum);
        }
        return sum;
        


        return sum;
    }
};
