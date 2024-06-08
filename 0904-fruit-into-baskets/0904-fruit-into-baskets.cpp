class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //longest array for having only 2 distinct fruit type;
        int left=0,right=0,ans=0;
        unordered_map<int,int>mp;//to count distinct fruits
        while(right<fruits.size()){
            mp[fruits[right]]++;
            if(mp.size()>2){
                while(left<=right&&mp.size()>2){
                    mp[fruits[left]]--;
                    if(mp[fruits[left]]==0){
                        mp.erase(fruits[left]);
                    }
                    left++;
                }
            }
                ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};