class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastindex=1;
        int lastnum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=lastnum){
                nums[lastindex]=nums[i];
                lastnum=nums[i];
                lastindex++;
            }
        }
        return lastindex;
    }
};