class Solution {
public:
 const long long maxi=1e14;
    int smallestBalancedIndex(vector<int>& nums) {
        int n=nums.size();
        vector<long long>pref(n);
        pref[0]=0;
        vector<long long>suf(n);
        suf[n-1]=1;
        for(int i=1;i<n;++i){
            pref[i]=pref[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;--i) {
            if(suf[i+1]>maxi/nums[i+1]){
                suf[i]=maxi+1;
            }else {
            suf[i]=(suf[i+1]*nums[i+1]);
            }
        }
        for(int i = 0; i < n; i++){
            if(pref[i] == suf[i]) return i;
        }
        return -1;
    }
};