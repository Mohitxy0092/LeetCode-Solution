class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int size=nums.size();
       long long resultant_sum=nums[size-1];
        for(int i=size-2;i>=0;i--) {
            if(nums[i]>resultant_sum) {
                resultant_sum=nums[i];
            }
            else {
                resultant_sum+=nums[i];
            }
        }
        return resultant_sum;
        
    }
};