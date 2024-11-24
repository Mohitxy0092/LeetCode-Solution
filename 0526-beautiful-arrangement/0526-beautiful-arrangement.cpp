class Solution {
public:
    void solver(vector<int>&v,int &n,int &ans,int currNum) 
    {
        if(currNum==n+1) {
            ans++;
            return;
        }
        for(int i=1;i<=n;i++) {
            if(v[i]==0 &&(currNum%i==0 || i%currNum==0)) {
                v[i]=currNum;
                solver(v,n,ans,currNum+1);
                v[i]=0;
            }
        }
    }
    int countArrangement(int n) {
        if(n==1) return 1;
         vector<int>v(n+1);
        int ans=0;
        solver(v,n,ans,1);
        return ans;
    }
};