class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++){
             if(count==0){
                ele=nums[i];
            }
            if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
        int countele=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                countele++;
            }
        }
        if(countele>nums.size()/2){
            return ele;
        }
        return -1;
       
    }
};