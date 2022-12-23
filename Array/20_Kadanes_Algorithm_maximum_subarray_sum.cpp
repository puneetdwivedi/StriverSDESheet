class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int res = arr[0];
        
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr += arr[i];
            
            res = max(curr, res);
            
            if(curr < 0) curr = 0;
        }
        
        return res;
    }
};