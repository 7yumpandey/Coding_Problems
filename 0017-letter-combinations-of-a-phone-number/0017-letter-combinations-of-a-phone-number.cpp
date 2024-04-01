class Solution {
public:
     map<char, vector<char>> mp;
    void solve(string curr,string digits,vector<string>&ans){
        if(curr.size()==digits.size()){
             ans.push_back(curr);
            return;
        }
        for(char x:mp[digits[curr.size()]]){
            solve(curr+x,digits,ans);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return {};
        }

        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};

        vector<string> ans;
        solve("", digits, ans);
        return ans;
    }
};