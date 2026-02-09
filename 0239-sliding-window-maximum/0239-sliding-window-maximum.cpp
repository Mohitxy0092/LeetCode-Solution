class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        int i=0;
        deque<int>q;
        for(;i<k;i++) {
            while(!q.empty() && nums[q.back()]<nums[i]) q.pop_back();
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);
        for(;i<n;i++) {
            if(!q.empty() && i-q.front()>=k) {
                q.pop_front();
            }
             while(!q.empty() && nums[q.back()]<nums[i]) q.pop_back();
            q.push_back(i);
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};