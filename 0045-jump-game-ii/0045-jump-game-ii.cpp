class Solution {
public:
    int solve(vector<int>nums,int n ,int i){
        if(i>=n-1){
            return 0;
        }
        int num=nums[i];
        int j=i+1;
        int ans=INT_MAX;
        while(num&&j<n){
            int a=solve(nums,n,j);
            if(a!=INT_MAX){
            ans=min(1+a,ans);
            } j++; 
        num--;
        }
        return ans;
        
    }
    int solve(vector<int>nums,int n){
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
        int num=nums[i];
        int j=1;
        while(num--&&j+i<n){
           dp[i+j]=min(dp[i+j],dp[i]+1);
            j++;
        }
        }
        return dp[n-1];
    }
    int jump(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        if(nums[i]==0){
            return 0;
        }
        int ans=solve(nums,n);
        return ans;
    }
};