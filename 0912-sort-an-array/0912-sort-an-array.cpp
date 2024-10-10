class Solution {
public:
    void merge(vector<int>&nums,int s,int e,int mid) {
        int lind = mid-s+1; // left index
        int rind = e-mid; // right index
        vector<int>Larr(lind); //left array
        vector<int>Rarr(rind); // right array
        int ai=s; // to push element from starting to mid
        for(int i=0;i<lind;i++) {
            Larr[i] = nums[ai++];
        }
        ai=mid+1;// to push element from mid+1 to end
        for(int i=0;i<rind;i++) {
            Rarr[i]=nums[ai++];
        }
        int i=0; int j=0;
        int mind=s;
        while(i<lind && j<rind) {
            if(Larr[i] <= Rarr[j]) {
                nums[mind++] = Larr[i++];
            }
            else {
                nums[mind++] = Rarr[j++];
            }
        }
        while(i<lind) {
            nums[mind++] = Larr[i++];
        }
        while(j<rind) {
            nums[mind++] = Rarr[j++];
        }
    }
    
    void mergeSort(vector<int>&nums,int s,int e) {
        if(s>=e) return;
        
        int mid=s+(e-s)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,e,mid);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};