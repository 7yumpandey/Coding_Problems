class Solution {
public:
    
    vector<pair<int,char>> solve(unordered_map<char,int> mp){
        vector<pair<int,char>>ans;
        for(auto x:mp){
            ans.push_back({x.second,x.first});
        }
        sort(ans.rbegin(),ans.rend());
        return ans;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> freqVec=solve(mp);
        string str="";
        for(auto x:freqVec){
            int a=x.first;
            while(a--){
                str+=x.second;
            }
        }
        return str;
        
    }
};