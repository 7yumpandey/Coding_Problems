class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
        st.push(s[0]);
        int count=1;
        for(int i=1;i<s.size();i++){
          
                st.push(s[i]);
                if(s[i]=='('){
                    count++;
                }
                else{
                    count--;
                    if(count==0){
               string str="";
               st.pop();
               while(!st.empty()){
                   if(st.size()==1&&st.top()=='('){
                       st.pop();
                   }
                   else{
                       str=st.top()+str;
                       st.pop();
                   }
               }
            ans+=str;
             }
            }
            
        }
        return ans;
    }
};