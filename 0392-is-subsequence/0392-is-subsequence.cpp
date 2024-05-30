class Solution {
public:
    int mod=1e9+7;
     int solveTab(string s1,string s2){
       int n=s1.size(),m=s2.size();
       if(n==0){
           return 0;
       }
       if(m==0){
           return 1;
       }
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int taken=0;
                if(s1[i-1]==s2[j-1]){
                    taken=dp[i-1][j-1]%mod;
                    
                }
                int notTaken=dp[i-1][j]%mod;
                dp[i][j]=(taken+notTaken)%mod;
            }
        }
        return dp[n][m]%mod;
   }
    bool isSubsequence(string s, string t) {
        if(s==t){
            return true;
        }
        int ans=solveTab(t,s);
        return ans>0? true:false;
    }
};