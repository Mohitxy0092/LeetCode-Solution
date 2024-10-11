class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxi=INT_MIN;
        int smaxi=INT_MIN;
        for(int n :nums) {
            if(n>maxi) {
                smaxi=maxi;
                maxi=n;
            }
            else {
                smaxi=max(smaxi,n);
            }
        }
        int mini=INT_MAX;
        int smini=INT_MAX;
        for(int n:nums) {
            if(n<mini) {
                smini=mini;
                mini=n;
            }
            else{
                smini= min(smini,n);
            }
        }
        return (maxi*smaxi)-(smini*mini);
    }
};