class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        sort(matrix.begin(),matrix.end());
       int m=matrix.size();
        int n = matrix[0].size();
        int s=0;
        int e=n-1;
        
        while(s < m && e>=0) {
           if(matrix[s][e]==target) {
               return true;
           }
            else if(matrix[s][e]<target) {
                s++; }
            else {
                e--;
            }
        }
        return false;
    }
};