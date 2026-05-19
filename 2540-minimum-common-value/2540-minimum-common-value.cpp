class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common_int=-1;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        while((i<n1) && (j<n2)) {
            if(nums1[i]==nums2[j]) {
                common_int=nums1[i];
                return common_int;
            }
            else if(nums1[i]<nums2[j]) {
                i++;
            }else {
                j++;
            }
        }
        while(i<n1) {
            if(j<n2 && nums1[i]==nums2[j]) {
                common_int=nums1[i];
                return common_int;
            }
            i++;
        }
        while(j<n2) {
            if(i<n1 && nums1[i]==nums1[j]) {
                common_int=nums1[i];
                return common_int;
            }
            j++;
        }
        return common_int;
    }
};