class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int buy=prices[0];
        int sell=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<sell){
                ans+=sell-buy;
                buy=prices[i];
                sell=prices[i];
            }
            if(prices[i]>sell){
                sell=prices[i];
            }
            
        }
        if(sell>buy){
        ans+=sell-buy;
        }
        return ans;
    }
};