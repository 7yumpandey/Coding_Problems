class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        string ans="";
        int i=a.size()-1,j=b.size()-1;
        while(i>=0&&j>=0){
            int x=a[i]-'0';
            int y=b[j]-'0';
            int num=carry+x+y;
            if(num>=2){
                carry=1;
                num-=2;
            }
            else{
                carry=0;
            }
            ans=to_string(num)+ans;
            i--;j--;
        }
        while(i>=0){
            int x=a[i]-'0';
            int num=carry+x;
            if(num==2){
                carry=1;
                num=0;
            }
            else{
                carry=0;
            }
            
            ans=to_string(num)+ans;
            i--;
            
        }
        while(j>=0){
            int x=b[j]-'0';
            int num=carry+x;
            if(num==2){
                carry=1;
                num=0;
            }
            else{
                carry=0;
            }
            ans=to_string(num)+ans;
            j--;
        }
        if(carry>0){
            ans=to_string(carry)+ans;
        }
        
        return ans;
        
    }
};