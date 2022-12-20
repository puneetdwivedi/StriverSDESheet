class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        
        map<int,int>mp;
        int sum=0;
        mp[sum]=1;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum-k) != mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
};