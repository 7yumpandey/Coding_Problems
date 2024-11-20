class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefix;
        prefix[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int comp=sum-k;
            ans+=prefix[comp];
            prefix[sum]++;
        }
        return ans;
//     int ans = 0;
//     int sum = 0;
//     unordered_map<int, int> prefixSumCount;
//     prefixSumCount[0] = 1; 

//     for (int num : nums) {
//         sum += num;
//         int complement = sum - k;
//         ans += prefixSumCount[complement];
//         prefixSumCount[sum]++;
//     }

//     return ans;
    }
};