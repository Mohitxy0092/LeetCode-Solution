class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++) {
            int c= 1;
            vector<int>ar;
            for(int j=1;j<=i;j++) {
                ar.push_back(c);
                c=c*(i-j)/j;
            }
            ans.push_back(ar);
        }
        return ans;
    }
};