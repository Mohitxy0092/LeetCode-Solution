class Solution {
public:
    char findTheDifference(string s, string t) {
        int xxor=0;
        for(char &ch : s) xxor^=ch;
        
        for(char &chh : t) xxor^=chh;
        
 return (char)xxor;
    }
};