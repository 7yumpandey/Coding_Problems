class Solution {
public:
    bool check(vector<int>& nums) {
        // the hint is ek sorted arry mai kewal ek hi pair smaller ka ho shkta hai
        int count=0;int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        if(count>1){
                return false;
            }
        return true;
        
    }
};