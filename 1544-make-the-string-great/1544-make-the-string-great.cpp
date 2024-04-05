class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
    
    for (int i = 0; i < s.size(); i++) {
        char tofind = 'a';
        bool batao = false;
        
        if (s[i] >= 'a' && s[i] <= 'z') {
            tofind = s[i] - 32;
        } else {
            tofind = s[i] + 32;
        }
        
        if (!st.empty() && st.top() == tofind) {
            st.pop();
            batao = true;
        }
        
        if (!batao) {
            st.push(s[i]);
        }
    }
    
    string ans = "";
    
    while (!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    
    return ans;
    }
};