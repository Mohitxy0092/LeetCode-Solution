class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()<=1) return arr.size();
        unordered_set<int>st(begin(arr),end(arr));
        int maxi=1;
        for(auto &x : st) {
            if(st.find(x-1)==st.end()) {
                int curr=1;
                while(st.find(x+curr)!=st.end()) {
                    curr++;
                }
                maxi=max(curr,maxi);
            }
        }
        return maxi;
    }
};