class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int i = 0;
	    int j = m-1;
	    
	    int result = 0;
	    int ind = 0;
	    while(i < n && j >=0){
	        if(arr[i][j] == 0){
	            i++;
	           // cout << m-1-j << " ";
	            if(result < m-1-j) {
	                ind = i-1;
	                result = m-1-j;
	            }
	        }
	        else{
	            j--;
	        }
	    }
	   if(result < m-1-j) {
	        ind = i;
	        result = m-1-j;
	    }
	    if(ind == 0 && arr[0][m-1] == 0) return -1;
	    return ind;
	}

};