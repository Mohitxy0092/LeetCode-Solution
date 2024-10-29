class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       vector<int>v(arr.size(),-1);
        int n=arr.size();
        for(int i=0;i<n-1;i++) {
            v[i]= *max_element(arr.begin()+i+1,arr.end());
        }
        return v;
    }
};