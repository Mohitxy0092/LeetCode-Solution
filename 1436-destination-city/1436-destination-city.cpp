class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>ah;
        for(int i=0;i<paths.size();i++) {
            string srx=paths[i][0];
            ah[srx]=1;
        }
         for(int i=0;i<paths.size();i++) {
            string dest = paths[i][1];
             if(ah[dest] !=1) {
                 return dest;
             }
        }
        return "";
    }
};