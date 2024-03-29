class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        long long  ans=0;long long  left=0;long long  right=0;
        unordered_map<int,int>mp;
        while(right<nums.size()){
           mp[nums[right]]++;
           while(left<=right&&mp[maxi]>=k){
              ans += nums.size() - right;
            mp[nums[left]]--;
            if (mp[nums[left]] == 0)
                mp.erase(nums[left]);
            left++;
           }
            right++;
            
            
        }
        return ans;
    }
};