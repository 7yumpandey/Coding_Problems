class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
       long long sum=0;
        long long count=0;
        sort(happiness.begin(),happiness.end());
        
        int n=happiness.size()-1;
        while(k>0){
            if(happiness[n]-sum<0){
                return count;
            }
            count+=(long)happiness[n]-sum;
            k--;
            sum++;
            n--;
        }
        return  count;
        
    }
};