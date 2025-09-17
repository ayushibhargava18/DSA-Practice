class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1;
        int candidate2; 
        int current1=0;
        int current2=0;
        int n=nums.size();

        for(int i=0; i<nums.size(); i++){
            if(current1==0){
                candidate1=nums[i];
                current1++;
            }
            else if(current2==0 && nums[i]!=candidate1){
                candidate2=nums[i];
                current2++;
            }
            else if(nums[i]==candidate1){
                current1++;
            }
            else if(nums[i]==candidate2){
                current2++;
            }
            else{
                current2--;
                current1--;
            }
        }

        current1=0;
        current2=0;

        for(int i=0; i<nums.size();i++){
            if(nums[i]==candidate1){
                current1++;
            }
            else if(nums[i]==candidate2){
                current2++;
            }
        }

        vector<int> result;
        if(current1>(n/3)){result.push_back(candidate1);}
        if(current2>(n/3)){result.push_back(candidate2);}
        return result;
    }
};
