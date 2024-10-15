class Solution {
public:
        unordered_map<int,bool>rowCheck;
        unordered_map<int,bool>upperDiagonal; 
        unordered_map<int,bool>lowerDiagonal;
    bool safe( int row,int col,vector<vector<char>>&board){
        if(rowCheck[row]==true) return false;

        if(lowerDiagonal[row+col]==true) return false;

        if(upperDiagonal[row-col]==true) return false;

        return true;
    }
    void storeSol( vector<vector<string>>&ans, vector<vector<char>>&board,int n){
        vector<string>tempAns;
        for(int i=0;i<n;i++) {
            string output="";
            for(int j=0;j<n;j++) {
                output.push_back(board[i][j]);
            }
            tempAns.push_back(output);
        }
        ans.push_back(tempAns);
    }
    void solve(int n, vector<vector<string>>&ans, vector<vector<char>>&board,int col) {
        if(col >=n) {
            storeSol(ans,board,n);
            return;
        }
        for(int row=0;row<n;row++) {
            if(safe(row,col,board)){
                board[row][col] ='Q';
                rowCheck[row] = true;
                upperDiagonal[row-col]=true;
                lowerDiagonal[row+col]=true;
                solve(n,ans,board,col+1);
                board[row][col]='.';
                rowCheck[row] = false;
                upperDiagonal[row-col]=false;
                lowerDiagonal[row+col]=false;
        }
    }
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>>ans;
         vector<vector<char>>board(n,vector<char>(n,'.'));
         int col=0;
         solve(n,ans,board,col);
         return ans;
    }
};