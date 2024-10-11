class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        // int maxi=INT_MIN;
        // int smaxi=INT_MIN;
        // int mini=INT_MAX;
        // int smini=INT_MAX;
        // for(int n :nums) {
        //     if(n>maxi) {
        //         smaxi=maxi;
        //         maxi=n;
        //     }
        //     else {
        //         smaxi=max(smaxi,n);
        //     }
        // }
        
        // for(int n:nums) {
        //     if(n<mini) {
        //         smini=mini;
        //         mini=n;
        //     }
        //     else{
        //         smini= min(smini,n);
        //     }
        // }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
    }
};