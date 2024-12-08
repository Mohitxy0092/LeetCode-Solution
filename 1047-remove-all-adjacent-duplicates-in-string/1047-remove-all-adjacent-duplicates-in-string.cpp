class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        
        int n=s.length();
        string ans="";
        while(i<n) {
            if(ans.empty() || s[i]!=ans.back()) {
                ans+=s[i];
            }
            else {
                ans.pop_back();
            }
            i++;
        }
        return ans;
    }
};