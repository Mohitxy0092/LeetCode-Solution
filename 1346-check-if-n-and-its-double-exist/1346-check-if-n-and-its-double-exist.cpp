class Solution {
public:
    int binary_search(vector<int>&arr,int val) {
        int s=0;
        int e=arr.size()-1;
        while(s<=e) {
            int mid= s+(e-s)/2;
            if(arr[mid]==val) {
                return mid;
            }
            else if(arr[mid]<val) {
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        sort(begin(arr),end(arr));
        for(int i =0;i<n;i++) {
            int index = binary_search(arr,2*arr[i]);
            if(index!=-1 && index!=i) {
                return true;
            }
        }
        return false;
    }
};