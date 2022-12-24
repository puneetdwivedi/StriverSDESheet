//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        map<long long int,int> mp;
        mp[0] = -1;
        int result = 0;
        long long int curr = 0;
        for(int i = 0; i< n; i++){
            curr += arr[i];
            if(mp.find(curr) != mp.end()){
                result = max(result, (i-mp[curr]));
                // cout << i << " " << mp[curr] << endl;
            }
            else{
                mp[curr] = i;
            }
        }
        
        return result;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends