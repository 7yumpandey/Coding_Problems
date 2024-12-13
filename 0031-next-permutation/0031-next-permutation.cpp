class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i;
        for(i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                break;
            }
        }
        
        if(i-1>=0){
            int j=nums.size()-1;
            while(j>=i){
                if(nums[i-1]<nums[j]){
                    swap(nums[i-1],nums[j]);
                    break;
                }
                j--;
            }
        }
        
        reverse(nums.begin()+i,nums.end());
        
        
    }
};