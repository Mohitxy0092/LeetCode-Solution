class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>ar(26,0);
        for(int i=0;i<s.length();i++) 
        {
            
            if((ar[s[i]-'a'])==1) {
                return s[i];
            }
            ar[s[i]-'a']++;
        }
        return 'x';
        
    }
};