class Solution {
    
    int merge(vector<int> &arr, int lo, int mid, int hi){
        int res = 0;
        int j = mid + 1;
        for(int i = lo; i <= mid; i++){
            while(j <= hi && arr[i] > 2ll*arr[j]) j++;
            res += (j - mid-1);
        }
        
        vector<int> tmp;
        int i = lo;
        j = mid+1;
        
        while(i <= mid && j <= hi){
            if(arr[i] <= arr[j]){
                tmp.push_back(arr[i++]);
            }
            else{
                tmp.push_back(arr[j++]);
            }
        }
        
        while(i <= mid){
            tmp.push_back(arr[i++]);
        }
        
        while(j <= hi){
            tmp.push_back(arr[j++]);
        }
        
        int p = lo;
        
        for(auto el : tmp){
            arr[lo++] = el;
        }
        
        return res;
    }
    
    int mergeSort(vector<int> &arr, int lo, int hi){
        if(lo >= hi) return 0;
        int mid = (lo + hi) >> 1;
        
        int res = mergeSort(arr, lo, mid);
        res += mergeSort(arr, mid+1, hi);
        res += merge(arr, lo, mid, hi);
        
        return res;
    }
    
public:
    int reversePairs(vector<int>& arr) {
        
        return mergeSort(arr, 0, arr.size()-1);
    }
};