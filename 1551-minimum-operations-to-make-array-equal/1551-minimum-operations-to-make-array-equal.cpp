class Solution {
public:
    int minOperations(int n) {
        int i=1;int ans=0;
        while(i<=n){
            ans+=n-i;
            i+=2;
        }
        return ans;
    }
};