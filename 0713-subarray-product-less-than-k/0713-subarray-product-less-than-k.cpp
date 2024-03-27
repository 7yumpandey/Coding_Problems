class Solution {
public:
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // int ans=0,product=1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<k){
        //         ans++;
        //     }
        //     if(product*nums[i]<k){
        //         ans++;
        //     }
        //     else if(product*nums[i]>k){
        //         product=nums[i];
        //     }
        // }
        // return ans;
         int ans = 0;
    int product = 1;
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
        product *= nums[right];
        while(product >= k && left <= right) {
            product /= nums[left];
            left++;
        }
        ans += (right - left + 1);
    }

    return ans;
        
    }
};