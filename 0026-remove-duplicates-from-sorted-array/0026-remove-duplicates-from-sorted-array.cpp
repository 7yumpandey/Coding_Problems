class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastindex=0;
        for(int i=1;i<nums.size();i++){
            if(nums[lastindex]!=nums[i]){
                nums[lastindex+1]=nums[i];
                lastindex++;
            }
        }
        return lastindex+1;
    }
};