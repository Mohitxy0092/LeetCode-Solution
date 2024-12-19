class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int num=1;
        int i=0;
        int n=nums.size();
        while(i<n && k>0) {
            if(nums[i]==num) {
                i++;
            }
            else {
                k--;
            }
            num++;
        }
        if(k>0) {
            while(k--) {
                num++;
            }
        }
        else {
            return num-1;
        }
        return num-1;
    }
};