class Solution {
public:
    string reverseWords(string s) {
        string word="", ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(word!=""&&ans!=""){
                ans=word+' '+ans;
                }
                else if(word!=""){
                    ans=word;
                }
                word="";
            }
            else{
                word+=s[i];
            }
        }
        if(word!=""&&ans!=""){
                ans=word+' '+ans;
                }
                else if(word!=""){
                    ans=word;
                }

        return ans;
        
    }
};