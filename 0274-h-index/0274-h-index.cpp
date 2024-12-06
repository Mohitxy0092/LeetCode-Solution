class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(begin(citations),end(citations) , greater<int>());
       int i=0;
       int n =citations.size();
       while(i<n && citations[i]>i) {
           i++;
       }
       return i;
    }
};