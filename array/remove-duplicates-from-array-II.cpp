class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0;
        int right=0;

        while(right<nums.size()){
            if(right<2){
                nums[left]=nums[right];
                left++;
            }
            else if(nums[right]!=nums[left-2]){
                nums[left]=nums[right];
                left++;
            }
            right++;
        }
        return left;
    }
};
