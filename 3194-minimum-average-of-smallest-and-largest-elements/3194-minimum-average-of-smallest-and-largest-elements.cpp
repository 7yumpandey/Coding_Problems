class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double ans=INT_MAX;
        int j=nums.size()-1;
        for(int i=0;i<=nums.size()/2;i++){
           if((nums[i]+nums[j])/2<ans){
               ans=(nums[i]+nums[j])/2.0;
           }
            j--;
        }
        return ans;
    }
};