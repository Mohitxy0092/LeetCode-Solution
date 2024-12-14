class Solution {
public:
     int pivotI(vector<int>&arr) {
      int s=0;
      int e=arr.size()-1;
      while(s<e) {
          int mid=s+(e-s)/2;
          if(arr[mid]>=arr[0]){
              s=mid+1;
          }
          else {
              e=mid;
          }
      }
      return s;
  }
  int bs(vector<int>&arr,int key,int s,int e) {
     while(s<=e) {
         int mid=s+(e-s)/2;
         if(arr[mid]==key) return mid;
         
         else if(arr[mid]<key) 
         s=mid+1;
         else
         e=mid-1;
     }
     return -1;
  }
  
    int search(vector<int>& arr, int key) {
        int pivotInd=pivotI(arr);
        if(arr[pivotInd]<=key && key<=arr[arr.size()-1]) {
            return bs(arr,key,pivotInd,arr.size()-1);
            
        }
        else {
            return bs(arr,key,0,pivotInd-1);
        }
        return -1;
    }
//     int search(vector<int>& nums, int target) {
        
//     }
};