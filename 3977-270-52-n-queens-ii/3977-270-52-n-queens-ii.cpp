class Solution {
public:unordered_map<int,bool>rowCheck;
    unordered_map<int,bool>upperDiagonal;
    unordered_map<int,bool>lowerDiagonal;
    bool isSafe(int row,int col) {
        if(rowCheck[row]==true) {
            return false;
        }
        if(upperDiagonal[row-col]==true) {
            return false;
        }
        if(lowerDiagonal[row+col]==true) {
            return false;
        }
        return true;
    }
    void pushSolution( vector<vector<string>>&ans, vector<vector<char>>&board,int n) {
        vector<string>temp;
        for(int i=0;i<n;i++) {
            string output="";
            for(int j=0;j<n;j++) {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }
    void solver( vector<vector<string>>&ans, vector<vector<char>>&board,int n,int col,int &num)         {
        if(col>=n) {
            pushSolution(ans,board,n);
            num++;
            return;
        }
        for(int row=0;row<n;row++) {
            if(isSafe(row,col)) {
                board[row][col]='Q';
                rowCheck[row]=true;
                upperDiagonal[row-col]=true;
                lowerDiagonal[row+col]=true;
                
                solver(ans,board,n,col+1,num);
                board[row][col]='.';
                rowCheck[row]=false;
                upperDiagonal[row-col]=false;
                lowerDiagonal[row+col]=false;
            }
        }
    } 
    int totalNQueens(int n) {
        vector<vector<string>>ans;
        int num=0;
        vector<vector<char>>board(n,vector<char>(n,'.'));
        int col=0;
        solver(ans,board,n,col,num);
        return num;
   
        
    }
};