class Solution {
public:
   
    void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
       int d=(nums.size()-k);

        reverse(nums.begin(),nums.begin()+d);
        reverse(nums.begin()+d,nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};