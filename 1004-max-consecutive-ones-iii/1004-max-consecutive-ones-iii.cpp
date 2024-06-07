class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//         Time complexity here will be -2n
//         int left=0,right=0;
//         int countzero=0,ans=0;
//         while(right<nums.size()){
//             if(nums[right]==0){
//                 countzero++;
//             }
//             if(countzero>k){
//                 while(left<=right&&countzero>k){
//                     if(nums[left]==0){
//                         countzero--;
//                     }
//                     left++;
//                 }
                
//             }
//             ans=max(ans,right-left+1);
//             right++;
//         }
//         return ans;
        
        int left=0,right=0;
        int countzero=0,ans=0;
        while(right<nums.size()){
            if(nums[right]==0){
                countzero++;
            }
         if (countzero <= k) {
            ans =max(ans, right - left + 1);
            }
  if (countzero > k) {
    if (nums[left] == 0) {
      countzero--;
    }
    left++;
  }
  right++;
        }
        return ans;
        
    }
};