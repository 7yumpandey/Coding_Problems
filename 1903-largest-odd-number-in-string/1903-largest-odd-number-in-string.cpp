class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        int odd=-1;
        while(i>=0){
            int n=num[i]-'0';
            if(n%2!=0){
                odd=i;
                break;
            }
            i--;
        }
        int j=0;
        string ans="";
        while(j<=odd&&odd!=-1){
            ans+=num[j];
            j++;
        }
        return ans;
    }
};