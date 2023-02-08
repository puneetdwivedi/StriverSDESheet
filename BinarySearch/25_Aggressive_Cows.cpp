class Solution {
    
    bool isPossbile(vector<int> &arr, int k, int mid){
        int last = arr[0];
        k--;
        for(int i = 1; i < arr.size(); i++){
            if(abs(arr[i]-last) >= mid){
                last = arr[i];
                k--;
            }
        }
        
        return k  <= 0;
    }
    
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        int lo = 1;
        int hi = 1e9;
        int res= 0;
        sort(stalls.begin(), stalls.end());
        
        while(lo <= hi){
            int mid = lo+ (hi-lo)/2;
            
            if(isPossbile(stalls, k, mid)){
                res = mid;
                lo = mid+1;
            }
            else hi = mid-1;
        }
        
        
        return res;
    }
};