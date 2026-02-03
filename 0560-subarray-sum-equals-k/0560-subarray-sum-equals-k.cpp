class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>st;
        int n=nums.size();
        int pre=0;
        int cnt=0;
        for(int i=0;i<n;++i) {
            pre+=nums[i];
            if(pre==k) cnt++;
            else if(st.find(pre-k)!=st.end()) cnt+=st[pre-k];
            st[pre]++;
        }
        return cnt;
    }
};