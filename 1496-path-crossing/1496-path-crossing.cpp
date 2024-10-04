class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string>st;
        int x=0;
        int y=0;
        string key = to_string(x) + "_" + to_string(y);
        st.insert(key);
        for(int i=0;i<path.size();i++) {
            if(path[i]== 'E') {
                x++;
            }
            else if(path[i]=='W') {
                x--;
            }
            else if(path[i]=='N') {
                y++;
            }
           else {
               y--;
           }
            string key = to_string(x) + "_" + to_string(y);
            if(st.find(key) != st.end()) {
                return true;
            }
            st.insert(key);
        }
        return false;
    }
};