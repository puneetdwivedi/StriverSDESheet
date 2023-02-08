class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        

        int missing = -1;
        for(int i = 1;i <= 2001; i++){
            if(k == 0) break;
            int lo = 0;
            int hi = arr.size()-1;
            bool found = false;
            while(lo <= hi){
                int mid = (lo+(hi-lo)/2);

                if(arr[mid] == i) {
                    found = true;
                    break;
                }
                else if(arr[mid] > i) hi = mid-1;
                else lo = mid+1;
            }
            if(!found) {
                k--;
                missing = i;
            }
        }

        return missing;
    }
};