class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(), n =grid[0].size();
        queue<pair<int,int>>q;
        int freshOrgs=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;++j) {
                if(grid[i][j]==2) {
                    q.push({i,j});
                }
                else if(grid[i][j]==1) {
                    freshOrgs++;
                }
            }
        }
        if(!freshOrgs) return 0;
        int minutes=0;
        vector<vector<int>>directions={{1,0},{0,1},{-1,0},{0,-1}};
        while(!q.empty()){
            int curr_size=q.size();
            bool newRotten=false;
            for(int i=0;i<curr_size;++i) {
                pair<int,int> front=q.front();
                int x_row=front.first;
                int y_col=front.second;
                q.pop();
                for(auto &dir : directions) {
                    int new_x_row=x_row+dir[0];
                    int new_y_col=y_col+dir[1];
                    if(new_x_row>=0 && new_x_row<m && new_y_col>=0 && new_y_col<n && grid[new_x_row][new_y_col]==1) {
                        grid[new_x_row][new_y_col]=2;
                        freshOrgs--;
                        q.push({new_x_row,new_y_col});
                        newRotten=true;
                    }
                }
            }
            if(newRotten) minutes++;
        }
        if(freshOrgs>0) return -1;

        return minutes;
    }
};