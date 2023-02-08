class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    int lo = 1;
	    int hi = m;
	   
	    while(lo <= hi){
	        int mid = lo+(hi-lo)/2;
	        if(pow(mid,n) == m) return mid;
	        else if(pow(mid,n) < m){
	            lo = mid+1;
	        }
	        else hi = mid-1;
	    }
	    
	    return -1;
	}  
};

