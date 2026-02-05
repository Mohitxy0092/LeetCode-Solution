/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeak(MountainArray &arr, int n) {
        int lo = 1, hi = n - 2;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int curr = arr.get(mid);
            int left = arr.get(mid - 1);
            int right = arr.get(mid + 1);
            if (curr > left && curr > right)
                return mid;
            else if (curr > left)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return -1;
    }
    int binarySearchAsc(MountainArray &arr, int lo, int hi, int target) {
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);

            if (val == target) return mid;
            if (val < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
    int binarySearchDesc(MountainArray &arr, int lo, int hi, int target) {
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = arr.get(mid);
            if (val == target) return mid;
            if (val > target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int peak = findPeak(mountainArr, n);
        int leftResult = binarySearchAsc(mountainArr, 0, peak, target);
        if (leftResult != -1) return leftResult;
        return binarySearchDesc(mountainArr, peak + 1, n - 1, target);
    }
};