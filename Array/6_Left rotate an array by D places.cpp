class Solution{
	
	void rotate(int arr[], int lo, int hi){
	    while(lo < hi){
	        swap(arr[lo], arr[hi]);
	        lo++; hi--;
	    }
	}
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k%= n;
	   rotate(arr, 0, k-1);
	   rotate(arr, k, n-1);
	   rotate(arr, 0, n-1);
	} 
		 

};