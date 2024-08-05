class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last =0;
        int count0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }
            else{
                nums[last]=nums[i];
                last++;
            }
        }
        for(int i=last;i<nums.size();i++){
            nums[last]=0;
                last++;
        }
    }
};