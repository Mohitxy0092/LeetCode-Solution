class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;
        vector<long long>ans;
       for(auto &x : nums){
            long long c=x;
            while(!st.empty() && c==st.top()) {
                st.pop();
                c*=2;
                
            }
            st.push(c);
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(begin(ans),end(ans));
    return ans;
    }
};