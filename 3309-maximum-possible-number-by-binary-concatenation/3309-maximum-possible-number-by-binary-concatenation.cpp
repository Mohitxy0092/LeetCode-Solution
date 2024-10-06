class Solution {
public:
    static string BinCov(int n) {
        string x = "";
        while(n>0) {
            x=(n%2 == 0 ? "0" : "1") + x;
            n/=2;
        }
        return x;
    }
    static bool compare(int x , int y){
        string binX = BinCov(x);
        string binY = BinCov(y);
        return (binX + binY) > (binY + binX);
    }
    int maxGoodNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(), compare);
        string ans = "";
        for(int n : nums) {
            ans +=BinCov(n);
        }
        int res = stoi(ans,NULL,2);
        return res;
    }
};