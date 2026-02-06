class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int n=nums.size();
        int i=0;
        int maxi=0;
        for(int j=0;j<n;++j) {
            while((1LL*nums[j])>(1LL*nums[i]*k)) {
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return n-maxi;
    }
};