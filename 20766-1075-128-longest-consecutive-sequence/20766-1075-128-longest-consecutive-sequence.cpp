class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int>s(begin(arr),end(arr));
       int max_len=0;
       for(int n : arr) {
           if(s.find(n-1)==s.end()) {
                int curr=n;
                int curr_len=1;
                while(s.find(curr+1) !=s.end()) {
                    curr++;
                    curr_len++;
                }
                max_len=max(max_len,curr_len);
           }
       }
       return max_len;
    }
};