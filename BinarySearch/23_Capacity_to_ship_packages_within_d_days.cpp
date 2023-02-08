class Solution {
private:
    bool isshipped(vector<int>& arr, int days,int mid){
        int n=arr.size();
        int req=1;
        int shipped=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid)return false;
            if(shipped+arr[i] > mid){
                req++;
                shipped=arr[i];
            }
            else{
                shipped+=arr[i];
            }
        }
        if(req>days)return false;
        return true;
    }
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int n=arr.size();
        int low=*min_element(arr.begin(),arr.end());
        int high=10000000;
        int res=-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(isshipped(arr,days,mid)){
                res=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return res;
    }
};