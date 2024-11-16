class Solution {
public:
    
    void solve(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&sum,int index) 
    {
        if(target==0) {
            ans.push_back(sum);
            return;
        }
        for(int i=index;i<candidates.size();i++) {
            if(candidates[i]<=target){
            sum.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,sum,i);
            sum.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        int index=0;
        vector<int>sum;
        solve(candidates,target,ans,sum,index);
  return ans;
    }
};