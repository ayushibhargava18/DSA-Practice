class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int res=0;
            int invalid=-1;
            int valid=-1;
        for(int i=0; i<nums.size(); i++){

            if(nums[i]>=left && nums[i]<=right){
                valid=i;
            }
            if(nums[i]>right){
                invalid=i;
            }
            if(valid>invalid){
                res=res+(valid-invalid);
            }
        }
        return res;
        
    }
};
