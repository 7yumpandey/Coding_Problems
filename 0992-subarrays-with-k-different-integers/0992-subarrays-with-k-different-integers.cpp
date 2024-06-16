class Solution {
public:
    //Exactly K element wala question 
    int solve(vector<int>nums,int n, int k){
        int left=0,right=0,ans=0;
        unordered_map<int,int>mp;
        while(right<n){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        return solve(nums,n,k)-solve(nums,n,k-1);
    }
};