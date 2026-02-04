class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        int maxi=0;
        int n=a1.size();
        vector<int>ar(n,0);
        for(int i=0;i<n;++i) {
            ar[i]=a1[i]-a2[i];
        }
        unordered_map<int,int>mp;
        int pre=0;
        for(int i=0;i<n;++i) {
            pre+=ar[i];
            if(pre==0) {
                maxi=i+1;
            }
            if(mp.find(pre)==mp.end()) {
                mp[pre]=i;
            }
            if(mp.find(pre-0) != mp.end()) {
                maxi=max(maxi,i-mp[pre-0]);
            }
        }
        
        return maxi;
        
    }
};