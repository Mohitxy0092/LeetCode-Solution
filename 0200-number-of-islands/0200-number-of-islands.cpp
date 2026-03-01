class Solution {
public:

    int m,n;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    void dfs(int x,int y,vector<vector<char>>& grid) {
        grid[x][y]='0';
        for(int i=0;i<4;++i) {
            int xx=dx[i]+x;
            int yy=dy[i]+y;
            if(xx>=0 && xx<m && yy>=0 && yy<n && grid[xx][yy]=='1' ) {
                dfs(x+dx[i],y+dy[i],grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
       int cnt=0;
        m=grid.size();
        n=grid[0].size();//assume m==n;
      
       for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            if(grid[i][j]=='1'){
                dfs(i,j,grid);
                cnt++;
            } 
        }
       }
       return cnt;

    }
};