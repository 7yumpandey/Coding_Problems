class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        
        // long long ans=0;
        // for(int i=0;i<nums.size();i++){
        //     int maxi=nums[i];
        //     int mini=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         maxi=max(maxi,nums[j]);
        //         mini=min(nums[j],mini);
        //         if(abs(nums[i]-nums[j])<=2 &&abs(maxi-nums[j])<=2&&abs(mini-nums[j])<=2){
        //             ans++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return ans+nums.size();
        
        long long ans = 0;
    int n = nums.size();
    multiset<int> window;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        window.insert(nums[right]);

        while (*window.rbegin() - *window.begin() > 2) {
            window.erase(window.find(nums[left]));
            left++;
        }

        ans += (right - left + 1);
    }

    return ans;
    }
};