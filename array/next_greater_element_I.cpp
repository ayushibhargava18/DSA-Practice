class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(int i=0; i<nums1.size();i++){
            for(int j=0; j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(nums2[j+1]>nums2[j]){
                        vec.push_back(nums2[j+1]);
                    }
                    else{
                        vec.push_back(-1);
                    }
                }
                else{
                    continue;
                }
            }
        }
        return vec;
    }
};
