class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 0)
            return false;
        if (nums[0] == 0)
            return false;
        int jumps = 0;
        int currentend = 0;
        int farthest = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, nums[i] + i);
            if (currentend == i) {
                jumps++;
                currentend = farthest;
                if (currentend >= nums.size() - 1) {
                    break;
                }
            }
        }
        return (currentend < nums.size() - 1) ? -1 : jumps;
    }
};
