class Solution {
public:
    bool isIsomorphic(string s, string t) {
         unordered_map<char,int>mpS;
        unordered_map<char,int>mpT;
        if(s.size()!=t.size()){
            return false;
        }
        for(int i = 0; i <s.size(); i++) { 
            if(mpS[s[i]] != mpT[t[i]]) { 
                return false; 
            }
            
            mpS[s[i]] = i + 1;
            mpT[t[i]] = i + 1;
        }
        
        return true;
    }
};