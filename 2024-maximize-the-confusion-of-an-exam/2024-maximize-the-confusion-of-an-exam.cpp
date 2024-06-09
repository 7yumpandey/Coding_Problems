class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
         int left=0,right=0,maxfreq=0,ans=0;
    
        unordered_map<char,int>mp;
        while(right<s.size()){
            mp[s[right]]++;
            maxfreq=max(maxfreq,mp[s[right]]);
            int changes=(right-left)+1-maxfreq;
            //right will tell the length of current subarray and the allowed changes can calculated jada wala char minus kar ke
            if(changes<=k){
                ans=max(ans,right-left+1);
            }
            if(changes>k){
                if(mp[s[left]]>0){
                    mp[s[left]]--;
                }
                
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
            }
            
            right++;
        }
        return ans;
    }
};