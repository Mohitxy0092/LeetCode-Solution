class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int result=0;
        vector<int>rowC(m,0);
        vector<int>colC(n,0);
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j]==1) {
                    rowC[i]++;
                    colC[j]++;
                }
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j]==0) continue;
                
                if(rowC[i]==1 && colC[j]==1) {
                    result++;
                }
            }
        }
        return result;
    }
};