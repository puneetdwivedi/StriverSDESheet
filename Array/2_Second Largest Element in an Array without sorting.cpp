class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    if(n == 1) return -1;
	    int smx = -1;
	    int fmx = arr[0];
	    for(int i = 0; i < n; i++){
	        if(arr[i] > fmx){
	            smx = fmx;
	            fmx = arr[i];
	        }
	        else if(arr[i] > smx && arr[i] != fmx){
	            smx = arr[i];
	        }
	    }
	    
	    return smx;
	}
};