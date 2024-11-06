class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // int m=matrix.size();
        // int n=matrix[0].size();
        for(int i=1;i<matrix.size();i++) {
            for(int j=1;j<matrix[0].size();j++) {
                if(matrix[i][j] != matrix[i-1][j-1]) {
                    return false;
                }
            }
        }
        return true;
    }
};