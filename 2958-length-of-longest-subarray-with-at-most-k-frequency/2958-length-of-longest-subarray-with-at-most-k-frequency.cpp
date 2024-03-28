class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;unordered_map<int,int>mp;int left=0,right=0;
        while(right<nums.size()){
            mp[nums[right]]++;
            if(mp[nums[right]]>k){
                while(left<right&&mp[nums[right]]>k){
                    if(mp[nums[left]]==1){
                        mp.erase(nums[left]);
                        
                    }
                    else{
                        mp[nums[left]]--;
                        
                    }
                    left++;
                }
            }
            ans=max(ans,right-left+1);
                right++;
        }
        return ans;
        
        
    }
};