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
        
        map<char,int>mp;int ans=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
            if(mp.size()==3){
                int mini=INT_MAX;
                for(auto x:mp){
                    if(x.second<mini){
                        mini=x.second;
                    }
                }
                ans+=mini+1;
            }
        }
        return ans;
    }
};