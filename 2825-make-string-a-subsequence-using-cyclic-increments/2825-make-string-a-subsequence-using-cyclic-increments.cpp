class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m= str1.length();
        int n=str1.length();
        int i=0;
        int j=0;
        while(i<n && j<str2.length()) {
            if(str1[i]==str2[j] || (str1[i]+1 == str2[j]) || (str1[i]=='z' && str2[j]=='a')) {
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        return (j==str2.length());
    }
};