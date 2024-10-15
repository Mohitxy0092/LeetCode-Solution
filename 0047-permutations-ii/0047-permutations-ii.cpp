class Solution {
public:
    void solve(vector<int>&nums,set<vector<int>>&s , int i) {
        if(i>=nums.size()) {
            s.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++) {
            swap(nums[i],nums[j]);
            solve(nums,s,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>s;
        solve(nums,s,0);
    return vector<vector<int>>(s.begin(),s.end());
    }
};