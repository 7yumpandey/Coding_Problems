class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       if(s.size()<=1){
           return s.size();
       }
        int ans=0;
        int left=0,right=0;
        unordered_map<int,int>alfa;
        while(right<s.size()){
            alfa[s[right]-'a']++;
            if(alfa[s[right]-'a']>1){
                while(left<=right&&alfa[s[right]-'a']>1){
                    alfa[s[left]-'a']--;
                    left++;
                }
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
        
        
    }
};