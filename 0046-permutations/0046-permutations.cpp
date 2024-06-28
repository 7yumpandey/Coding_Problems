class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int start){
   if (start >= nums.size()) {
        ans.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        solve(nums, ans, start + 1);
        swap(nums[start], nums[i]); 
    }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>temp;
        solve(nums,ans,0);
        return ans;
    }
};