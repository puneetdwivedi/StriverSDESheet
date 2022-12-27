class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int res = -1;
        int lo = 0, hi = arr.size()-1;
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target){
                hi = mid-1;
            }
            else {
                res = mid;
                lo = mid+1;
            }
        }
        
        return res+1;
    }
};