class Solution {
public:
    int maxProfit(vector<int>& arr) {
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
        int ans=0;
        int mini=arr[0];
        for(int i=0;i<arr.size();i++){
            int cost=arr[i]-mini;
            if(cost>ans){
                ans=cost;
            }
            mini=min(mini,arr[i]);
        }
        return ans;
    }
};