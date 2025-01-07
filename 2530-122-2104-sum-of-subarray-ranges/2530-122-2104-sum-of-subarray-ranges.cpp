class Solution {
public:
vector<int> nextsmallerElement(vector<int>&nums) {
        stack<int>s;
        s.push(-1);
        vector<int>v(nums.size(),-1);
       for(int i=nums.size()-1;i>=0;i--){
             while(!s.empty() && s.top() != -1 && nums[s.top()]>nums[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
vector<int> previousmallerElement(vector<int>&nums) {
        stack<int>s;
        s.push(-1);
        vector<int>v(nums.size(), -1);
         for(int i=0;i<nums.size();i++) {
            while(!s.empty() && s.top() != -1 && nums[s.top()]>=nums[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
long long sumSubarrayMins(vector<int>& nums) {
        auto next=nextsmallerElement(nums);
        auto prev=previousmallerElement(nums);
        long long sum=0;
        for(int i=0;i<nums.size();i++) {
            long long nexti= next[i] == -1 ? nums.size() : next[i];
            long long previ=prev[i];
            long long left = i-previ;
            long long right = nexti-i;
             sum+=left*right*nums[i];
        }
        return sum;
    }
    
    vector<int> nextGreaterElement(vector<int>&nums) {
        stack<int>s;
        s.push(-1);
        vector<int>v(nums.size(),-1);
       for(int i=nums.size()-1;i>=0;i--){
             while(!s.empty() && s.top() != -1 && nums[s.top()]<nums[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    vector<int> previouGreaterElement(vector<int>&nums) {
        stack<int>s;
        s.push(-1);
        vector<int>v(nums.size(), -1);
         for(int i=0;i<nums.size();i++) {
            while(!s.empty() && s.top() != -1 && nums[s.top()]<=nums[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    long long sumSubarrayMaxs(vector<int>& nums) {
        auto next=nextGreaterElement(nums);
        auto prev=previouGreaterElement(nums);
        long long sum=0;
        for(int i=0;i<nums.size();i++) {
            long long nexti= next[i] == -1 ? nums.size() : next[i];
            long long previ=prev[i];
            long long left = i-previ;
            long long right = nexti-i;
             sum+=left*right*nums[i];
        }
        return sum;
    }
    
    long long subArrayRanges(vector<int>& nums) {
        long long minSum=sumSubarrayMins(nums);
        long long maxSum=sumSubarrayMaxs(nums);
        long long ans=maxSum-minSum;
        return ans;
    }
};