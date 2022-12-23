class Solution {
public:
    // nlogn
    int longestConsecutive(vector<int>& arr) {
        if(arr.size() == 0) return 0;

        sort(arr.begin(), arr.end());
        int n = arr.size();
        int len = 1;
        int res = 1;
        int i = 1;
        while(i < n){
            if(arr[i] == arr[i-1]) {
                i++;
                continue;
            }
            else if(arr[i-1]+1 == arr[i]){
                len++;
            }
            else{
                res = max(len, res);
                len = 1;
            }
            i++;
        }  
        res=max(res, len);
        return res;      
    }
};


// o(n)
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        
        if(n == 0 || n == 1) return n;
        
        unordered_set<int> us;
        
        for(auto el : arr) us.insert(el);
        
        int res = 0;
        for(int i = 0; i < n; i++){
            if(us.find(arr[i] -1 ) == us.end()){
                int j = arr[i];
                while(us.find(j) != us.end()) j++;
                res = max(res, j-arr[i]);
            }
        }
        return res;
    }
};