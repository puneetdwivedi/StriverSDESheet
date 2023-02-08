class Solution {
    bool cansplit(vector<int> &arr, int m, int mid){
        int sum = 0;
        int cnt = 1;
        for(int i =0 ;i < arr.size(); i++){
            if(arr[i] > mid) return false;
            if(sum+arr[i] > mid){
                cnt++;
                sum = arr[i];
            }
            else sum += arr[i];
        }
        
        if(cnt > m) return false;
        return true;
    }
public:
    int splitArray(vector<int>& arr, int m) {
        int lo = *min_element(arr.begin(), arr.end());
        int hi = 0;
        for(auto el : arr) hi += el;
        int res = *(max_element(arr.begin(), arr.end()));
        while(lo <= hi){
            int mid = lo+(hi-lo)/2;
            // cout << mid << endl;
            if(cansplit(arr, m, mid)){
                res = mid;
                hi = mid -1;
            }
            else lo = mid+1;
        }
        
        return res;
    }
};