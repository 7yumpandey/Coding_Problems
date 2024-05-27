class Solution {
public:
     int solve(vector<int>&nums,int ind,int prev,int difference){
         if(ind==nums.size()){
             return 0;
         }
         
         int notTaken=solve(nums,ind+1,prev,difference);
         int taken=0;
         if(prev==-1||(nums[ind]-nums[prev])==difference){
             taken=1+solve(nums,ind+1,ind,difference);
         }
         return max(taken,notTaken);
     }
    int longestSubsequence(vector<int>& arr, int diff) {
        
         //solve(arr,0,-1,difference);
        
         int n = arr.size();
        unordered_map<int,int> dp; // Stores maxi length possible of each index

        int res = 1; // the default length 

        for(auto &x: arr){
            if(dp.find(x-diff) != dp.end()){
                dp[x] = dp[x-diff] + 1;
            }else{
                dp[x] = 1;
            }
            res = max(res, dp[x]);
        }

        return res;
        
    }
};