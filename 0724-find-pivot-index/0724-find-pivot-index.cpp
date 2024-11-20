class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=0;
        int tsum=0;
        
        for(int i=0;i<nums.size();i++){
            tsum+=nums[i];
        }
        int rsum=0;
        for(int i=0;i<nums.size();i++){
            if(rsum==tsum-rsum-nums[i]){
                return i;
            }
            rsum+=nums[i];
        }
        return -1;
    }
};