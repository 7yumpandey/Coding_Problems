class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int last=0;
        int i=0;
        while(i<nums.size()){
            if(nums[last]!=nums[i]){
                last++;
                nums[last]=nums[i];
            }
            else{
                i++;
            }
            
        }
        return last+1;
    }
};