class Solution {
public:
    int numberOfSubstrings(string s) {
//         int left=0,right=0,ans=0,minfreq=INT_MAX;
//         unordered_map<char,int>mp;
//         while(right<s.size()){
//         mp[s[right]]++;

//         while (mp.size() == 3&&left<=right) {
//             ans += s.size() - right;
//             mp[s[left]]--;
//             if (mp[s[left]] == 0) {
//                 mp.erase(s[left]);
//             }
//             left++;
//         }
        
//         right++;
//         }
//         return ans;
        
        vector<int>charstore(3,-1);int ans=0;
        for(int i=0;i<s.size();i++){
            charstore[s[i]-'a']=i;
            if(min({charstore[0],charstore[1],charstore[2]})!=-1){
                int mini=min({charstore[0],charstore[1],charstore[2]});
                ans+=mini+1;
            }
        }
        return ans;
    }
};