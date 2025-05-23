class Solution {
public:
    typedef long long ll;
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        ll sum=0;
        ll cnt=0;
        ll loss=INT_MAX;
        for(ll x : nums) {
            if((x^k) > x) {
                cnt++;
                sum+=(x^k);
            }
            else {
                sum+=x;
            }
            loss=min(loss,(ll)abs(x-(x^k)));
        }
        if(cnt%2 ==0) return sum;
        return sum-loss;
    }
};