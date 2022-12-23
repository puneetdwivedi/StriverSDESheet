//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &arr, int n, int m, int k)
    {
        int firstRow = 0;
        int lastRow = n-1;
        int firstCol = 0;
        int lastCol = m-1;
        vector<int> result;
        while(firstRow <= lastRow && firstRow <= lastCol){
            for(int i = firstCol; i<= lastCol; i++){
                result.push_back(arr[firstRow][i]);
            }
            firstRow++;
            for(int i = firstRow; i<= lastRow; i++){
                result.push_back(arr[i][lastCol]);
            }
            lastCol--;
            
            // if(firstRow > lastRow || firstCol > lastCol) return -1;
            for(int i = lastCol; i>= firstCol; i--){
                result.push_back(arr[lastRow][i]);
            }
            lastRow--;
            for(int i = lastRow; i>= firstRow; i--){
                result.push_back(arr[i][firstCol]);
            }
            firstCol++;
        }
        // for(auto el : result) cout << el << " ";
        return result[k-1];
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends