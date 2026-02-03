class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>st;
        int n=arr.size();
        int pre=0;
        int cnt=0;
        for(int i=0;i<n;++i) {
            pre+=arr[i];
            if(pre==k){
             cnt=i+1;   
            }
            else if(st.find(pre-k)!=st.end()) {
                cnt=max(cnt,i-st[pre-k]);
            }
            if(st.find(pre)==st.end()) {
                st[pre]=i;
            }
            }
        return cnt;
        
    }
};