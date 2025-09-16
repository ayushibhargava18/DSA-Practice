class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int> vec(nums.size());
        int pos=nums.size()-1;

        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                vec[pos]=nums[left]*nums[left];
                left++;
                }
            else{
                vec[pos]=nums[right]*nums[right];
                right--;
            }
            pos--;
        }
        return vec;

    }
};
