class Solution {
public:

    int m,n;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    bool isValid(int x,int y,vector<vector<char>>& grid,vector<vector<bool>>&vis) {
        if(x<0 || x>=m || y<0 || y>=n) return false;
        if(vis[x][y]==true || grid[x][y]=='0') return false;
        return true;
    }
    void dfs(int x,int y,vector<vector<char>>& grid,vector<vector<bool>>&vis) {
        vis[x][y]=true;
        for(int i=0;i<4;++i) {
            if(isValid(x+dx[i],y+dy[i],grid,vis)) {
                dfs(x+dx[i],y+dy[i],grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
       int cnt=0;
        m=grid.size();
        n=grid[0].size();//assume m==n;
       vector<vector<bool>> vis(m, vector<bool>(n, false));
       for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            if((vis[i][j]==false ) && grid[i][j]=='1'){
                dfs(i,j,grid,vis);
                cnt++;
            } 
        }
       }
       return cnt;

    }
};