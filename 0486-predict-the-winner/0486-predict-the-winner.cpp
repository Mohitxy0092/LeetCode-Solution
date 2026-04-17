class Solution {
public:
#define ll long long
    ll recur(vector<int>&nums,int i,int j) {
        if(i>j) return 0;
        if(i==j) return nums[i];
        ll lft=nums[i]+ min(recur(nums,i+1,j-1),recur(nums,i+2,j));
        ll rght=nums[j]+min(recur(nums,i+1,j-1),recur(nums,i,j-2));
        return max(lft,rght);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        if(n&1){
            ll amount=recur(nums,0,n-1);
            ll sum=accumulate(begin(nums),end(nums),0);
            if(2*amount>=sum) return true;
            else return false;
        }
        return true;
    }
};