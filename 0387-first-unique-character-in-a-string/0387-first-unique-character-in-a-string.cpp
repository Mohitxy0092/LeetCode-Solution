class Solution {
public:
    int firstUniqChar(string s) {
       int ar[26] = {0};
        for(int i=0;i<s.length();i++) {
            char ch = s[i];
            ar[ch -'a']++;
        }
        for(int i=0;i<s.length();i++) {
            char ch = s[i];
            if(ar[ch-'a']==1){
                return i;
            }
        }
        return -1;
    }
};