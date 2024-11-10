class Solution {
public:
    // int solve(int n) {
    //     if(n==0) {
    //         return 0;
    //     }
    //     if(n==1) {
    //         return 1;
    //     }
    //     return solve(n-1)+solve(n-2);
    // }
    
    int solver(int n,int &next) {
        if(n==0){
            next=1;
            return 0;
        }
        int nb;
        int recur= solver(n/2,nb);
        int a = recur*(2*nb - recur);
        int b= nb*nb + recur*recur;
        if(n%2==0) {
            next=b;
            return a;
        }
        else {
            next=a+b;
            return b;
        }
    }
    int fib(int n) {
        // int ans=solve(n);
        // return ans;
        int next;
        return solver(n,next);
    }
};