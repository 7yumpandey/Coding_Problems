class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()||t.size()==0){
            return "";
        }
//O(N^2)
//         int minilen=INT_MAX,startindex=-1;
//         int right=0,left=0;
//          while(right<s.size()){
             
//          }
        
        
//         for(int i=0;i<=s.size()-t.size();i++){
//             vector<int>hash(256,0);
//             int count=0;
//             for(int j=0;j<t.size();i++){
//                 hash[t[j]]++;
//             }
//             for(int j=0;j<s.size();j++){
//                 if(hash[s[j]]>0){
//                     count++;
//                 }
//                 hash[s[j]]--;
//                 if(count==t.size()){
//                 if(j-i+1<minilen){
//                     minilen=j-i+1;
//                     startindex=i;
//                     break;
//                 }
//             }
//             }
//         }
//         string ans="";
//         if(startindex!=-1){
//             for(int i=startindex;i<minilen;i++){
//                 ans+=s[i];
//             }
//         }
//         return ans;
        
        int mini=INT_MAX,startind=-1,count=0;
        int right=0,left=0;string ans="";
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        while(right<s.size()){
            if(mp[s[right]]>0){
                count++;
            }
            mp[s[right]]--;
            while(count==t.size()){
                if(right-left+1<mini){
                mini=right-left+1;
                startind=left;}
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    count--;
                }
                left++;
            }
            right++;
        }
        return startind==-1?"":s.substr(startind,mini);
    }
};