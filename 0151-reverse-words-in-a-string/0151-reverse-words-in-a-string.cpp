class Solution {
public:

    string reverseWords(string s) {
        // stack<string>st;
        // string str="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==' '){
        //         if(str!=""){
        //         st.push(str);
        //         str="";
        //         }
        //     }
        //     else{
        //         str+=s[i];
        //     }
        // }
        // if(str!=""){
        //     st.push(str);
        // }
        // string ans="";
        // while(!st.empty()){
        //      string a=st.top();
        //      st.pop();
        //      ans += a;
        //      if (!st.empty()) {
        //          ans +=" ";
        //      }
        // }
        // return ans;
        
        int n=s.size();
        int left=0;
        string ans="",temp="";
        while(left<n){
            char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {if (temp != "") {
                if (ans != "") {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
                temp = "";
            }
        }
        left++;
        }
        
        if (temp!="") {
        if (ans!=""&&temp!="") ans = temp + " " + ans;
        else ans = temp;
    }
        return ans;
        
    }
};