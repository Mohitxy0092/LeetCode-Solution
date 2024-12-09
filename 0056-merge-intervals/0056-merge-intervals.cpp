class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        vector<vector<int>>res;
        for(int i=0;i<intervals.size();i++) {
            vector<int>ar=intervals[i];
            if(res.empty() || res[res.size()-1][1]<ar[0]) {
                res.push_back(ar);
            }
            else {
                res[res.size()-1][1]=max(res[res.size()-1][1],ar[1]);
            }
        }
        return res;
        
    }
};