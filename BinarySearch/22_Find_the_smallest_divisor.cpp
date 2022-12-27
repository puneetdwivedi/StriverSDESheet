class Solution {
public:

    bool isPossible(vector<int> &arr, int th, int mid){
        int cnt = 0;

        for(auto el : arr){
            cnt += ceil(el/(double)mid);
        }

        return cnt <= th;
    }

    int smallestDivisor(vector<int>& arr, int th) {
        int lo = 1;
        int hi = 1e6;

        int res = -1;

        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(isPossible(arr, th, mid)){
                res =mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }


        return res;
    }
};
  