class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res =0;
        int curr=0;
        for(auto i : nums) {
            if(i==1) {
              curr++;
                res= max(res,curr);
            }
            else {
                curr=0;
            }
        }
        return res;
    }
};