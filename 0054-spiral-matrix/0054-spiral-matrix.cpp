class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
       int m=matrix.size();
       int n=matrix[0].size();
       int total_element = m*n;
       int startingRow = 0;
       int endingColumn =n-1;
       int endingRow = m-1;
       int startingCol=0;
       int count=0;
       while(count<total_element) {
        for(int i=startingCol;i<=endingColumn && count<total_element;i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i=startingRow;i<=endingRow && count<total_element;i++) {
            ans.push_back(matrix[i][endingColumn]);
            count++;
        }
        endingColumn--;
        for(int i=endingColumn;i>=startingCol && count<total_element;i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i=endingRow;i>=startingRow && count<total_element;i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
        }
        return ans;
       }
};