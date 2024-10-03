class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=0;
        int secMax = 0;
        for(int x : nums) {
            if(maxi<x) {
                secMax=maxi;
                maxi = x;
                 
            }
           else {
               secMax = max(secMax,x);
           }
        }
        return (secMax-1)*(maxi-1);
    }
};