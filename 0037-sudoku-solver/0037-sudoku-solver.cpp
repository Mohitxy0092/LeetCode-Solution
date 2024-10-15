class Solution {
public:
bool isSafe(int row,int col,char digit,vector<vector<char>>& board) {
    //rowCheck
    for(int i=0;i<board.size();i++) {
        if(board[row][i]==digit){
            return false;
        } 
    }
    //column Check
    for(int i=0;i<board.size();i++) {
        if(board[i][col]==digit) {
             return false; 
             }    
    }
    //3*3 board Check
    for(int i=0;i<board.size();i++) {
        int rowInd = 3*(row/3)+i/3;
        int colInd = 3*(col/3)+i%3;
        if(board[rowInd][colInd]==digit) {
            return false;
    }
    }

return true;
}
bool solve(vector<vector<char>>& board) {
    for(int i=0;i<board.size();i++) {
        for(int j=0;j<board[0].size();j++) {
            //only fill digit on empty spaces
            if(board[i][j]=='.') {
                for(char digit='1';digit<='9';digit++) {
                    if(isSafe(i,j,digit,board)==true) {
                        board[i][j]=digit;
                        bool isSolved =solve(board);
                       if(isSolved==true) {
                        return true;
                        }    
                       else {
                         board[i][j]='.';
                       }
                    } 
                }
                //unable to insert any digits 
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};