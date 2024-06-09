class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
         int left=0,right=0,maxfreq=0,ans=0;
    
        int t=0,f=0;
        while(right<s.size()){
            if(s[right]=='T'){
                t++;
            }
            else{
                f++;
            }
            maxfreq=max({maxfreq,t,f});
            int changes=(right-left)+1-maxfreq;
            //right will tell the length of current subarray and the allowed changes can calculated jada wala char minus kar ke
            if(changes<=k){
                ans=max(ans,right-left+1);
            }
            if(changes>k){
                if(s[left]=='T'){
                t--;
            }
            else{
                f--;
            }
                left++;
            }
            
            right++;
        }
        return ans;
    }
};