class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long res=0;
        while(s[i]==' ') {
            i++;
        }
        
        if(s[i]=='-' || s[i]=='+') {
            sign = (s[i]=='+') ? 1 : -1;
            i++;
        }
        while(s[i]>='0' && s[i]<='9') {
            
        if(res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] > '7')) {
            return sign == -1 ? INT_MIN : INT_MAX;
        }
            res=res*10+(s[i]-'0');
            i++;
        }
        return res*sign;
    }
};