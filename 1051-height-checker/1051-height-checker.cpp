class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>num=heights;
        sort(num.begin(),num.end());
        int ans=0;
        for(int i=0;i<heights.size();i++){
            if(num[i]!=heights[i]){
                ans++;
            }
        }
        return ans;
    }
};