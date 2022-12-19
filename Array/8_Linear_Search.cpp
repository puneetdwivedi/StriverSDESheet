// linear search O(n)

int searchInSorted(int arr[], int N, int K) 
    { 
    
       for(int i = 0;i < N; i++){
           if(arr[i] == K) return 1;
       }
       
       return -1;
    }


// binary for sortedinput

  class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int lo = 0;
       int hi = N-1;
       while(lo <= hi){
           int mid = lo+(hi-lo)/2;
           if(arr[mid] == K) return 1;
           else if(arr[mid] < K) lo = mid+1;
           else hi = mid-1;
       }
       
       return -1;
    }
};