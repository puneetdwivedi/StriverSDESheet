// o(n) o(n)
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int maximum[n];
        int curr=INT_MIN;
        for(int i=n-1;i>=0;i--){
            curr=max(curr,arr[i]);
            maximum[i]=curr;
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,(maximum[i]-arr[i]));
        }
        return res; 
    }
};


// o(n) o(1)

int maxProfit(vector<int> &arr) {
    int reslt = 0;
    int n = arr.size();
    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        mn = min(mn, arr[i]);
        reslt = max(reslt, arr[i] - mn);
    }
    
    return reslt;
}