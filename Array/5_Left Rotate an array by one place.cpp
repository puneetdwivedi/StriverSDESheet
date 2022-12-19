class Solution {
    
int merge(vector<int> &arr,long long lo,long long mid,long long hi){
    long long i=lo;
    long long j=mid+1;
    long long k=lo;
    long long temp[hi+1];
    long long int res = 0;
    while(i<=mid && j<=hi){
        if(arr[i] > arr[j]){
            res+=(mid+1-i);
            temp[k]=arr[j];
            k++;j++;
        }
        else{
            temp[k]=arr[i];
            k++;i++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;i++;
    }
    while(j<=hi){
        res+=(mid+1-i);
        temp[k]=arr[j];
        k++;j++;
    }
    for(int x=lo;x<=hi;x++){
        arr[x]=temp[x];
    }
    return res;
}

    
    long long int mergeSort(vector<int> &arr, long long int lo , long long int hi){
        long long int res = 0;
        if(lo< hi){
            long long int mid = lo+(hi-lo)/2;
            
            res += mergeSort(arr,  lo, mid);
            res += mergeSort(arr, mid+1, hi);
            res += merge(arr,  lo, mid, hi);
        }
        return res;
    }
    
    int globalInversion(vector<int> arr){
        vector<int> tmp(arr.size());
        long long int x = mergeSort(arr, 0, arr.size()-1);
        for(auto el : arr) cout << el << " ";
        cout << endl;
        return x;
    }
    
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n = nums.size();
        long long int gI = globalInversion(nums); 
        
        long long int lI = 0;
        for(int i = 1;i < n; i++){
            if(nums[i-1] > nums[i])lI++;
        }
        // cout << lI << " " << gI << endl;
        return lI == gI;
    }
};
