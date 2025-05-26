class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();++i) {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();++i) {
            v.push_back(nums2[i]);
        }
        sort(begin(v),end(v));
        int n=v.size();
        int mid=n/2;
        if(n%2!=0) {
            return (double)v[mid];
        }
        int mid1=v[mid+1];
        return (double)(v[mid]+v[mid-1])/2;
    }
};