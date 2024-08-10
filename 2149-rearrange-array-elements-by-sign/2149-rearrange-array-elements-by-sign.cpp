class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int even=0,neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg=neg+2;
            }
            else{
                ans[even]=nums[i];
                even=even+2;
            }
        }
        return ans;
    }
};