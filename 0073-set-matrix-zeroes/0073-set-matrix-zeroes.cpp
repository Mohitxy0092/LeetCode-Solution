class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int m=matrix.size();
        // int n=matrix[0].size();
        // vector<bool>rows(m,false) , cols(n,false);
        // for(int i=0;i<m;i++) {
        //     for(int j=0;j<n;j++) {
        //         if(matrix[i][j]==0) {
        //             rows[i]=true;
        //             cols[j]=true;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++) {
        //     for(int j=0;j<n;j++) {
        //         if(rows[i]|| cols[j]) {
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        bool frow = false,fcol=false;
        for(int i=0;i<matrix[0].size();i++) {
            if(matrix[0][i]==0) {
                frow=true;
                break;
            }
        }
        for(int i=0;i<matrix.size();i++) {
            if(matrix[i][0]==0) {
                fcol=true;
                break;
            }
        }
        
        for(int i=1;i<matrix.size();i++) {
            for(int j=1;j<matrix[i].size();j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++) {
            for(int j=1;j<matrix[i].size();j++) {
                if(matrix[i][0]==0 || matrix[0][j]==0) {
                    matrix[i][j]=0;
                }
            }
        }
        if(frow) {
            for(int i=0;i<matrix[0].size();++i) {
                matrix[0][i]=0;
            }
        }
        if(fcol) {
            for(int i=0;i<matrix.size();++i) {
                matrix[i][0]=0;
            }
        }
    }
};