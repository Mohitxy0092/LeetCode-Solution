class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int n=arr.size();
       vector<int>v(n,-1);
       
        for(int i=0;i<n-1;i++) {
            v[i]= *max_element(arr.begin()+i+1,arr.end());
        }
        return v;
    }
};