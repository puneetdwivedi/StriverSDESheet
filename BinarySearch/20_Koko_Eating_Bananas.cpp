class Solution {

    bool isPossible(vector<int> &arr, int h, long long int mid){
        long long int tt = 0;
        for(auto el : arr){
            tt += ceil(el/(double)mid);
        }

        return (tt <= h);
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int lo = 1;
        long long int hi = 1e9;
        long long int res = 0;
        while(lo <= hi){
            long long int mid = lo + (hi-lo) / 2;
            if(isPossible(piles, h, mid)){
                res = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }

        return res;
    }
};