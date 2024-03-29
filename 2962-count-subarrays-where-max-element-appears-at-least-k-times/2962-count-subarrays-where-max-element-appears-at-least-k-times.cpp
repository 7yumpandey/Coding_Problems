class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        long long  ans=0;long long  left=0;long long  right=0;
        unordered_map<int,int>mp;
        int count=0;
        while(right<nums.size()){
           if(nums[right]==maxi){
               count++;
           }
           while(left<=right&&count>=k){
               ans += nums.size()-right;
               if(nums[left]==maxi){
                   count--;
               }
               left++;
           }
            right++;
        }
        return ans;
    }
};