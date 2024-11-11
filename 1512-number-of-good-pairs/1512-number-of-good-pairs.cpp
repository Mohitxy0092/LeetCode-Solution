class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++) {
            int curr_element= nums[i];
            for(int j=i+1;j<nums.size();j++) {
                if(curr_element==nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};