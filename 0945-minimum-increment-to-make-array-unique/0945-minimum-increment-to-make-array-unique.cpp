class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int ans = 0;
        int mini= nums[0] + 1;
        for(int i = 1; i < nums.size(); i++) {
            if(mini >= nums[i]) {
                ans += (mini - nums[i]);
                mini++;
            } else {
                mini = nums[i] + 1;
            }
        }
        return ans;
    }
};