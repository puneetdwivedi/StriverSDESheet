class Solution {
public:
    void sortColors(vector<int>& arr) {
        int lo = 0, hi = arr.size()-1;
        int k = 0;
        while(k <= hi){
            if(arr[k] == 0){
                swap(arr[k],arr[lo]);
                lo++;k++;
            }
            else if(arr[k] == 2){
                swap(arr[hi--],arr[k]);
            }
            else k++;
        }
    }
};