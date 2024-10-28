class Solution {
public:
    static bool compare(pair<int,int>&a , pair<int,int>&b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        if(nums.size()==0 || nums.size()==1) {
            return nums;
        }
    unordered_map<int,int>hash;
        for(auto n : nums) {
            hash[n]++;
        }
        vector<pair<int,int>>sort_freq(hash.begin(),hash.end());
     sort(sort_freq.begin(),sort_freq.end(),compare);
       for(auto x : sort_freq) {
               ans.push_back(x.first);
           k--;
           if(k==0) {
               break;
           }
           }
        return ans;
    }
};