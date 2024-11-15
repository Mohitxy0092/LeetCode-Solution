class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)  return true;
        if(num==2) return false;
        int s=1;
        long long e=num-1;
        while(s<=e) {
            long long mid=s+(e-s)/2;
            long long squaring_num=mid*mid;
            if(squaring_num==num) {
                return true;
            }
            else if(squaring_num<num) {
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return false;
    }
};