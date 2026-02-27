class Solution {
  typedef pair<int,int> p;
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        unordered_map<int,list<p>>adj;
        for(auto &x : edges) {
            int a=x[0];
            int b=x[1];
            int w=x[2];
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }
        priority_queue<p,vector<p>,greater<p>>q;
        int ans=0;
        unordered_map<int,bool>vis;
        q.push({0,0});
        while(!q.empty()) {
            p curr=q.top();
            q.pop();
            int to=curr.second;
            int w=curr.first;
            if(vis[to]) continue;
            
            ans+=w;
            vis[to]=true;
            for(auto &x : adj[to]) {
                if(vis[x.first]==false){
                    q.push({x.second,x.first});
                }
            }
        }
        return ans;
        
    }
};