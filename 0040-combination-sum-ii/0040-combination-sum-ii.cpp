class Solution {
public:
     void solve(vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&sum,int index) 
    {
        if(target==0) {
            ans.push_back(sum);
            return;
        }
        for(int i=index;i<candidates.size();i++) {
            if(i>index && candidates[i]==candidates[i-1]) {
                continue;
            }
            if(candidates[i]<=target){
            sum.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,sum,i+1);
            sum.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
         vector<vector<int>>ans;
        int index=0;
        vector<int>sum;
        solve(candidates,target,ans,sum,index);
  return ans;
    }
};