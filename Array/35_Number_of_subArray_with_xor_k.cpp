class Solution{
public:
    int subsetXOR(vector<int> arr, int n, int k) {
            int xr = 0;
            map<int,int> mp;
            
            int res = 0;
            
            for(int i = 0; i < n; i++){
                xr = xr ^ arr[i];
                
                if(xr == k) res++;
                int p  = xr^k;
                if(mp.find(p) != mp.end()){
                    res += mp[p];
                }
                mp[xr]++;
            }
            
            return res;
    } 
};