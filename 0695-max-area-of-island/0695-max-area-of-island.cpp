class Solution {
public:
 int m,n;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    bool isValid(int x,int y,vector<vector<int>>& grid,vector<vector<bool>>&vis) {
        if(x<0 || x>=m || y<0 || y>=n) return false;
        if(vis[x][y]==true || grid[x][y]==0) return false;
        return true;
    }
    void dfs(int x,int y,vector<vector<int>>& grid,vector<vector<bool>>&vis,vector<int>&c_cnt,int col) {
        grid[x][y]=col;
        c_cnt[col]++;
        vis[x][y]=true;
        for(int i=0;i<4;++i) {
            if(isValid(x+dx[i],y+dy[i],grid,vis)) {
                dfs(x+dx[i],y+dy[i],grid,vis,c_cnt,col);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return true;
        int cnt=0;
        m=grid.size();
        n=grid[0].size();//assume m==n;
       vector<vector<bool>> vis(m, vector<bool>(n, false));
       vector<int>c_cnt(m*n+1,0);
       int maxi=0;
       for(int i=0;i<m;++i) {
        for(int j=0;j<n;++j) {
            if((vis[i][j]==false ) && grid[i][j]==1){
                cnt++;
                dfs(i,j,grid,vis,c_cnt,cnt);
                 maxi=max(maxi,c_cnt[cnt]);
            } 
        }
       }
       return maxi;
    }
};