class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt=0;
       for(auto &x : arr1) {
        bool flg=false;
        for(auto &y : arr2) {
            if(abs(x-y)<=d) {
                flg=true;
                break;
            }
        }
        if(!flg) cnt++;
       }
       return cnt;
    }
};