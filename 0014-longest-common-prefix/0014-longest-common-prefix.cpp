class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        string ans="";
        int i=0;
        while(i<a.size()){
            if(a[i]!=b[i]){
                return ans;
            }
            ans+=a[i];
            i++;
        }
        return ans;
    }
};