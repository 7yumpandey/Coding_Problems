#include<bits/stdc++.h>
class Solution {
public:
    bool ispalindrom(vector<char>s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(string s,int i,vector<char>temp, int &ans){
        if(i>=s.size()){
            return ;
        }
        solve(s,i+1,temp,ans);
        temp.push_back(s[i]);
        if(ispalindrom(temp)){
            if(temp.size()>ans){
                ans=temp.size();
            }
        }
        solve(s,i+1,temp,ans);
        temp.pop_back();
        
        
    }
    
    int solveMemo(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>j){
            return 0;
        }
        if(i==j){
            return 1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s[i]==s[j]){
            dp[i][j]= 2+solveMemo(s,i+1,j-1,dp);
        }
        else{
            dp[i][j]= max(solveMemo(s,i+1,j,dp),solveMemo(s,i,j-1,dp));
        }
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {
        int ans=0;
        vector<char>temp;
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        // solve(s,0,temp,ans);
        return solveMemo(s,0,n-1,dp);
        return ans;
    }
};