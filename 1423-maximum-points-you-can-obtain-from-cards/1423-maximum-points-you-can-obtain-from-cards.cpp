class Solution {
public:
    int solve(int i,int j,int n,int k,vector<int>&cards,vector<vector<int>>&dp){
        if(k==0||i>=n||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int nottaken=cards[j]+solve(i,j-1,n,k-1,cards,dp);
        int taken=cards[i]+solve(i+1,j,n,k-1,cards,dp);
        return dp[i][j]= max(nottaken,taken);
        
    }

    int maxScore(vector<int>& card, int k) {
       int sum=0;
        int ans=0;
       for(int i=0;i<k;i++){
           sum+=card[i];
       }
        ans=sum;
       int i=k-1,j=card.size()-1;
       while(i>=0){
           sum+=-card[i]+card[j];
           ans=max(ans,sum);
           i--;j--;
       }
        return ans;
    }
};