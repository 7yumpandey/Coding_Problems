class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    long long ans = 0;
    int culprit = -1;
    int mini = -1;
    int maxi=-1;
    int i=0;
    while(i<nums.size()){
        if(nums[i]>maxK||nums[i]<minK){
            culprit=i;
        }
        if(nums[i]==maxK){
            maxi=i;
        }
        if(nums[i]==minK){
            mini=i;
        }
        
        long long smaller=min(mini,maxi);
        long long temp=smaller-culprit;
        if(temp<=0){
            ans+=0;
        }
        else{
            ans+=temp;
        }
        i++;
    }
        return ans;
    
}
};