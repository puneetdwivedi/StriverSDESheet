	
	// move every zero one by one at the last
	void pushZerosToEnd(int arr[], int n) {
	   
	    for(int i = n-1; i >= 0; i--){
	        if(arr[i] == 0){
	            int j = i;
	            while(j+1 < n && arr[j+1] != 0){
    	            swap(arr[j+1], arr[j]);
    	            j++;
    	        }
	        }
	    }
	}



// keep the track of all non zero element
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   
	   int el = 0;
	   for(int i = 0;i < n;i++){
	       if(arr[i] != 0){
	           swap(arr[el], arr[i]);
	           el++;
	       }
	   }
	}
};