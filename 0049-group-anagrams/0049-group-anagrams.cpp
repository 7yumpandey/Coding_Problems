class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         map<string, vector<string>> mp;
      for (int i = 0; i < strs.size(); i++) {
        string a = strs[i];
        sort(a.begin(), a.end());
        mp[a].push_back(strs[i]);
    }
    
    vector<vector<string>> result;
    for (auto x:mp) {
        result.push_back(x.second);
    }

    return result;
        
        
        
    }
};