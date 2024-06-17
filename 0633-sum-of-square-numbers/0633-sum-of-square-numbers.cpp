class Solution {
public:
    bool judgeSquareSum(int c) {
        
        for(long long i=0;i<=sqrt(c);i++){
            long long a=i*i;
            long long b=c-a;
            long long d=sqrt(abs(b));
            if(a+d*d==c){
                return true;
            }
        }
        return false;
    }
};