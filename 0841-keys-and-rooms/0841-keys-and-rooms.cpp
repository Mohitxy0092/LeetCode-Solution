class Solution {
public:
    void dfs(vector<vector<int>>&rooms,unordered_map<int,bool>&vis,int src) {
        vis[src]=true;
        for(auto &x : rooms[src]) {
            if(!vis[x]){
                dfs(rooms,vis,x);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,bool>vis;
        int n=rooms.size();
        dfs(rooms,vis,0);
        for(int i=0;i<n;++i){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
};