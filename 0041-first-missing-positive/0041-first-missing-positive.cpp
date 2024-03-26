class Solution {
public:
    
    int firstMissingPositive(vector<int>& nums) {
        // int small=1;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==small){
        //             small++;
        //         }
        //     }
        // }
        // return small;
        
        int n = nums.size();
      for(int i=0; i<n; i++) {
         if(nums[i]<=0 || nums[i]>=n+1){
            nums[i] = n+1;
         }
      } 
       for(int i=0; i<n; i++) {
         int element = abs(nums[i]);
         if(element == n+1){
            continue;
           }
           if(nums[element-1] > 0){
            nums[element-1] = -nums[element-1];
           }
         }
        for (int i=0; i<n; i++){
           if(nums[i]>0){
            return (i+1);
        }
        }
        return n+1;
    }
};