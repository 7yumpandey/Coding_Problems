class Solution {
public:
    int solve(vector<int>nums,int k){
        int left=0,right=0;
        int ans=0, odd=0;
        while(right<nums.size()){
            if(nums[right]%2!=0){
                odd++;
            }
            if(odd>k){
             while(left<=right&&odd>k){
                if(nums[left]%2!=0){
                    odd--;
                }
                 
                left++;
            }
            }
             ans+=right-left+1;
            
            right++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
       return solve(nums,k)-solve(nums,k-1);
    }
};