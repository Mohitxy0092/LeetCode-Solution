class Solution {
public:
    vector<int> nextsmallerElement(vector<int>&arr) {
        stack<int>s;
        s.push(-1);
        vector<int>v(arr.size(),-1);
       for(int i=arr.size()-1;i>=0;i--){
             while(!s.empty() && s.top() != -1 && arr[s.top()]>arr[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    vector<int> previousmallerElement(vector<int>&arr) {
        stack<int>s;
        s.push(-1);
        vector<int>v(arr.size(), -1);
         for(int i=0;i<arr.size();i++) {
            while(!s.empty() && s.top() != -1 && arr[s.top()]>=arr[i]) {
                s.pop();
            }
            v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    int sumSubarrayMins(vector<int>& arr) {
        auto next=nextsmallerElement(arr);
        auto prev=previousmallerElement(arr);
        int sum=0;
        const int mod=1e9 + 7;
        for(int i=0;i<arr.size();i++) {
            int nexti= next[i] == -1 ? arr.size() : next[i];
            int previ=prev[i];
            int left = i-previ;
            int right = nexti-i;
            long long occur=(((right%mod)*(left%mod)) % mod);
            long long total=(( occur )* arr[i]) % mod;
             sum = (sum +total) % mod;
        }
        return sum;
    }
};