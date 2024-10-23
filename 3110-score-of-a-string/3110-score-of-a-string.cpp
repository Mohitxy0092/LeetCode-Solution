class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=1;i<s.length();i++) {
            
            int ans= abs(int(s[i]) - int(s[i-1]));
            sum+=ans;
    }
        return sum;
    }
};