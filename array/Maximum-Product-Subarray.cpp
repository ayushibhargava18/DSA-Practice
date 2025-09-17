class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=nums[0];
        int current=nums[0];

        for(int i=1; i<nums.size();i++){
            current=max(nums[i], current*nums[i]);
            product=max(product, current);
        }
        return product;
        
    }
};
