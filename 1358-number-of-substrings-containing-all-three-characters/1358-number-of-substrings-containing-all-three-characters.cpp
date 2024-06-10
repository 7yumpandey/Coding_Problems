class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,ans=0,minfreq=INT_MAX;
        unordered_map<char,int>mp;
        while(right<s.size()){
        mp[s[right]]++;

        while (mp.size() == 3) {
            ans += s.size() - right;
            mp[s[left]]--;
            if (mp[s[left]] == 0) {
                mp.erase(s[left]);
            }
            left++;
        }
        
        right++;
        }
        return ans;
    }
};