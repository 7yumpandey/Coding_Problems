class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //1st algo
        
        int currMax=nums[0];
        int currMin=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max({nums[i],nums[i]*currMax,currMin*nums[i]});
            currMin=min({nums[i],nums[i]*currMax,currMin*nums[i]});
            currMax=temp;
            ans=max(ans,currMax);
        }
        return ans;
//         int ans1=nums[0];
//         int maxi=nums[0];
//         int mini=nums[0];
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]<0){
//                 swap(maxi,mini);
//             }
            
//             maxi=max(nums[i],maxi*nums[i]);
//             mini=min(nums[i],mini*nums[i]);
//             ans1=max(ans1,maxi);
//         }
//         return ans1;
        // //
        // int maxi = nums[0];
        // int mini = nums[0];
        // int ans = nums[0];
        // for(int i = 1;i < nums.size();i++){
        //     if(nums[i] < 0){
        //         swap(maxi,mini);
        //     }
        //     maxi = max(nums[i],maxi*nums[i]);
        //     mini = min(nums[i],mini*nums[i]);
        //     ans = max(ans,maxi);
        // }
        // return ans;
        
        // int product=1;
        // int maxproduct=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     product=product*nums[i];
        //     maxproduct=max(product,maxproduct);
        //     if(product<0){
        //         if(i+1<nums.size()&&nums[i+1]>0){
        //             product=1;
        //         }
        //     }
        // }
        // return maxproduct;
    }
};