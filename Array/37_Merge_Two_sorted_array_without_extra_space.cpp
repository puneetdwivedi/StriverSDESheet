class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        if(n ==0) return ;
        for(int i = 0; i < m; i++){
            if(arr1[i] > arr2[0]){
                swap(arr1[i], arr2[0]);
            }
            int j = 0;
            while(j < n-1 && arr2[j] > arr2[j+1]){
                swap(arr2[j], arr2[j+1]);
                j++;
            }
        }
        
        int i = m;
        int j = 0;
        while(j < n){
            arr1[i++] = arr2[j++];
        }
        
        return;
    }
};