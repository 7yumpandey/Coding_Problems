class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int ans = 0;
    int sum = 0;
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; 

    for (int num : nums) {
        sum += num;
        int complement = sum - k;
        ans += prefixSumCount[complement];
        prefixSumCount[sum]++;
    }

    return ans;
        
    }
};