class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int sz=arr.size();
        vector<int>res(sz);
        int i=0;
        int p=0;
        int n=0;
        while(i<sz){
            if(i%2==0){
                while(arr[p] < 0)p++;
                res[i]=arr[p];
                p++;
            }
            else{
                while(arr[n] >=0)n++;
                res[i]=arr[n];
                n++;
            }
            i++;
        }
        return res;
    }
};