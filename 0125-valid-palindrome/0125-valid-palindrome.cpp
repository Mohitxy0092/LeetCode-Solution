class Solution {
public:
    bool solver(string &ans) {
        int i=0; int j=ans.length()-1;
        while(i<j) {
            if(ans[i]!=ans[j]) {
                return false;
            }
            i++; j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string ans="";
        if(s.length()==0 ||s.length()==1) {
            return true;
        }
        for(int i=0;i<s.length();i++) {
            if(isalnum(s[i])) {
                ans+= tolower(s[i]);
            }
        }
        return solver(ans);
    }
};