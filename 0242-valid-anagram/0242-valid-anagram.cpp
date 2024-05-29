class Solution {
public:
    bool isAnagram(string s, string t) {
    //     int n=s.size(),m=t.size();
    //     if(n!=m){
    //         return false;
    //     }
    //     if(s==t){
    //         return true;
    //     }
    //     map<char,int>mp1,mp2;
    //     for(int i=0;i<n;i++){
    //         mp1[s[i]]++;
    //         mp2[t[i]]++;
    //     }
    //     int a=mp1.size(),b=mp2.size();
    //     if(a!=b){
    //         return false;
    //     }
    //     for (auto x:mp1) {
    //     char key =x.first;
    //     if (mp2.find(key) == mp2.end() || mp1[key] != mp2[key]) {
    //         return false;
    //     }
    // }
    // return true;
        
        int n=s.size(),m=t.size();
        if(n!=m){
            return false;
        }
        if(s==t){
            return true;
        }
        map<char,int>mp1;
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
            mp1[t[i]]--;
        }
        for(auto x:mp1){
            if(x.second!=0){
                return false;
            }
        }
        return true;
            
        
        
    }
};