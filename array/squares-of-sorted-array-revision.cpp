class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0;
       int right=nums.size()-1;
       vector<int> answer(nums.size());
       int pos=answer.size()-1;

       while(left<=right){
        if(abs(nums[left])>abs(nums[right])){
            answer[pos]=nums[left]*nums[left];
            left++;
        }
        else{
            answer[pos]=nums[right]*nums[right];
            right--;
        }
        pos--;
       }
       return answer;

    }
};
