class Solution {
public:
    int pivotInteger(int n) {
        int final=n*(n+1)/2;
        for(int i=1;i<=n;i++)
        {
            int first=i*(i+1)/2;
            int last =final-first+i;
            if(first==last)return i;
            
        }
        return -1;
    }
};