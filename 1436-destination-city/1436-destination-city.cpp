class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>ah;
        for(int i=0;i<paths.size();i++) {
            string srx=paths[i][0];
            ah.insert(srx);
        }
         for(int i=0;i<paths.size();i++) {
            string dest = paths[i][1];
             if(ah.find(dest)==ah.end()){
                 return dest;
             }
        }
        return "";
    }
};