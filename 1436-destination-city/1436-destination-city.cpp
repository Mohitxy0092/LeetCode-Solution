class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string ,int>mp;
        for(auto &p : paths) {
            string src = p[0];
            mp[src]=1;
        }
        for(auto &p : paths) {
            string dect = p[1];
            if(mp[dect] != 1) {
                return dect;
            }
        }
        return "";
    }
};