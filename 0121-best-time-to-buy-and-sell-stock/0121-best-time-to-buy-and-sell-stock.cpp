class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int ans=0;
//         int n=prices.size();
//         int mindayind=0;
//         int maxdayind=0;
//         for(int i=1;i<n;i++){
//             if(prices[mindayind]>prices[i]){
//                 mindayind=i;
//             }
//             if(maxdayind<mindayind){
//                 maxdayind=mindayind;
//             }
//             if(prices[i]>prices[maxdayind]){
//                 maxdayind=i;
//             }
//             ans=max(ans,prices[maxdayind]-prices[mindayind]);
            
//         }
//         return ans;
        int ans=0,mini=prices[0];
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-mini;
            ans=max(ans,cost);
            mini=min(mini,prices[i]);
        }
        return ans;
    }
};