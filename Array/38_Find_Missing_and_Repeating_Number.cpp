//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        long long int ts1 = 0;
        long long int cs1 = 0;
        long long int ts2 = 0;
        long long int cs2 = 0;
        for(int i = 0; i< n; i++){
            ts1 += i+1;
            cs1 += (arr[i]);
            ts2 += ((i+1)*(long long int)(i+1));
            cs2 += (arr[i]*(long long int)(arr[i]));
        }
        // x = missing number and y is repeating number
        long long int xmy = ts1-cs1;
        long long int xpy = (ts2-cs2)/(xmy);
        
        int x = (xpy + xmy)/2;
        int y =  xpy - x;
        
        int *result =new int[2];
        result[0] = y;
        result[1] = x;
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends