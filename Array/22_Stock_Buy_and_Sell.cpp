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


// gfg

//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int arr[], int n) {
    vector<pair<int,int>> result;
    int se = 0;
    int i = 0;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            result.push_back({se, i});
            se = i+1;
        }
    }
    
   result.push_back({se, n-1});
   
    int cnt = 0;
    for(auto el : result){
        if(el.first != el.second && el.first < n){
            cout << "(" <<el.first << " " << el.second << ") ";
            cnt++;
        }  
    }
    if(!cnt) cout << "No Profit";
    cout << endl;
}