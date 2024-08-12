class Solution {
public:
    int helper(vector<int> &piles, int mid) {
    long long total = 0;  // Use long long to prevent overflow
    for(int i = 0; i < piles.size(); i++) {
        total += (piles[i] + mid - 1) / mid; 
        // No need to check for overflow since long long is used
    }
    return total > INT_MAX ? INT_MAX : total; // Handle very large values
}

int minEatingSpeed(vector<int>& piles, int h) {
    int high_range = *max_element(piles.begin(), piles.end());  // Find max in piles
    int low = 1;
    int high = high_range;
    int ans = INT_MAX;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        int req_time = helper(piles, mid);
        if(req_time <= h) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}
};