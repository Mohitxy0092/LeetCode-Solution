class Solution {
public:
    int minPairSum(vector<int>& nums) {
       int ans=-1;
        sort(begin(nums),end(nums));
        int s=0;
        int e=nums.size()-1;
        while(s<e) {
            ans= max(ans,(nums[s++]+nums[e--]));
        }
        return ans;
    }
};