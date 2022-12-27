class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int lo = 1;
        long long int hi = x;
        long long int res = 0;
        while(lo <= hi){
            long long int mid = lo+(hi-lo)/2;
            
            if(mid*mid <= x){
                res = mid;
                lo =mid+1;
            }
            else hi = mid-1;
        }
        
        return res;
    }
};