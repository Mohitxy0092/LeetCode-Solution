class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int res =0;
        for(int i=0;i<s.size();i++) {
            char ch =s[i];
            for(int j=0;j<t.size();j++) {
                if(ch==t[j]) {
                    res += abs(j-i);
                }
            }
        }
        return res;
    }
};