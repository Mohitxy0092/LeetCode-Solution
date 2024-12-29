class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
      set<int>s(a.begin(),a.end());
        vector<int>ans;
        for(int i=0;i<b.size();i++) {
            if(s.find(b[i])!=s.end()) {
                ans.push_back(b[i]);
                s.erase(b[i]);
            }
        }
        return ans;
    }
};