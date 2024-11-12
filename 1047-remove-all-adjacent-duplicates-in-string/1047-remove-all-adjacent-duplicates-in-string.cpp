class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.length();i++) {
            char curr_char =s[i];
            if(ans.empty() || curr_char !=ans.back()) {
                ans.push_back(curr_char);
            }
            else if(ans.back() == curr_char) {
                ans.pop_back();
            }
            }
        return ans;
    }
};