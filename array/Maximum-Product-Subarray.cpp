class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=nums[0];
        int current=nums[0];
        int minproduct=nums[0];

        for(int i=1; i<nums.size();i++){
            if(nums[i]<0){
                swap(minproduct, current);
            }

            current=max(nums[i], current*nums[i]);
            minproduct=min(nums[i], minproduct*nums[i]);

            product=max(product, current);
        }
        return product;
        
    }
};
