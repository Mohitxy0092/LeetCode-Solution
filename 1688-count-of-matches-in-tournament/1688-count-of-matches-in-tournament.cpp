class Solution {
public:
    int numberOfMatches(int n) {
        int res=0;
        while(n>1) {
            if(n%2==0) {
               int digit=n/2;
                n=abs(n-digit);
                res+=digit;
            }
            else{
                int digit=(n-1)/2;
                n=abs(n-digit);
                res+=digit;
            }
        }
        return res;
    }
};