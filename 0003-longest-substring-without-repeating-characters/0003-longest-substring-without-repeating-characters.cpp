class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }
        int left=0,right=0,ans=0;
        map<char,int>mp;
        while(right<s.size()){
            mp[s[right]]++;
            if(mp[s[right]]>1){
                while(left<=right&&mp[s[right]]>1){
                    mp[s[left]]--;
                    if(mp[s[left]==0]){
                        mp.erase(s[left]);
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