class Solution {
public:
    int subarrayK(vector<int>&nums,int k) {
        unordered_map<int,int>st;
        int pre=0;
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;++i) {
            pre+=nums[i];
            if(pre==k) {
                maxi=i+1;
            }
            if(st.find(pre-k)== st.end()) {
                st[pre]=i;
            }
            if(st.find(pre-k) !=st.end()) {
                maxi=max(maxi,i-st[pre-k]);
            }
        }
        return maxi;
    }
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;++i) {
            if(nums[i]==0) {
                nums[i] = -1;
            }
        }
        return subarrayK(nums,0);
    }
};