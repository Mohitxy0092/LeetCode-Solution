class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int>ans;
        stack<int>st;
        ans.push_back(1);
        st.push(0);
        int n=arr.size();
        for(int i=1;i<n;++i) {
            while((st.empty()==false) &&(arr[st.top()]<=arr[i])) {
                st.pop();
            } 
            int span=(st.empty()? i+1 : i-st.top());
            ans.push_back(span);
            st.push(i);
        }
        return ans;
        
    }
};