class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        /*int num=1;
        int i=0;
        int n=nums.size();
        while(i<n && k>0) {
            if(nums[i]==num) {
                i++;
            }
            else {
                k--;
            }
            num++;
        }
        if(k>0) {
            while(k--) {
                num++;
            }
        }
        else {
            return num-1;
        }
        return num-1;*/
        
        int s=0;
        int e=nums.size()-1;
        int mid=-1;
        int missing_number_till_mid=0;
        while(s<=e) {
           mid=s+((e-s) >> 1);
            missing_number_till_mid = nums[mid]-(mid+1);
            if(missing_number_till_mid < k) {
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return s+k;
    }
};