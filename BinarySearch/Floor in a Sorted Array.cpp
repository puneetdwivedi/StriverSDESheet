class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        
     
        long long int lo = 0;
        long long int hi = n-1;
            
        int res = -1;
        while(lo <= hi){
            long long int mid = lo + (hi-lo)/2;
            
            if(arr[mid] <= x){
                res = mid;
                lo = mid+1;
            }
            else hi = mid-1;
        }
        
        
        return res;
    }
};