class Solution {
public:
    int dominantIndices(vector<int>& nums) {
       /* pick i and avg(i+1 to n);
        if(curr ith element is greater dominant)
        */
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n-1;++i) {
            double c=(double)nums[i];
            int j=i+1;
            double sum=0.0;
            for(;j<n;++j) {
                sum+=(double)nums[j];
            }
            int s_size=n-i-1;
            double avg=sum/s_size;
            if(c>avg) {
                cnt++;
            }
        }
        return cnt;
    }
};