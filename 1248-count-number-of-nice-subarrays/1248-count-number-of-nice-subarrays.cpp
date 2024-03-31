class Solution {
public:
    int numberOfSubarraysAtMost(vector<int>& nums, int k){
        int noOfOdd=0;
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        while(j<n){
            if(nums[j]%2!=0){
                noOfOdd++;
            }
            while(i<=j && noOfOdd>k){
                if(nums[i]%2!=0){
                    noOfOdd--;
                }
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numberOfSubarraysAtMost(nums,k)-numberOfSubarraysAtMost(nums,k-1);
    }
};