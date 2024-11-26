class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int minsum=nums[0];
        int currmaxsum=0;
        int currminsum=0;
        int totalsum=0;
        for(int i=0;i<n;i++) {
            currmaxsum=max(currmaxsum+nums[i],nums[i]);
            maxsum=max(currmaxsum,maxsum);
            
            currminsum=min(currminsum+nums[i],nums[i]);
            minsum=min(currminsum,minsum);
            
            totalsum+=nums[i];
        }
        int circularsum=totalsum-minsum;
        if(totalsum==minsum) {
            return maxsum;
        }
        return max(circularsum,maxsum);
    }
};