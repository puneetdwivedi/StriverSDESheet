class Solution 
{
    public:
    bool cansplit(int arr[],int n, int m,int mid){
        int array=1;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid)return false;
            if(sum+arr[i] > mid){
                sum=arr[i];
                array++;
            }
            else{
                sum+=(arr[i]);
            }
        }
        if(array > m)return false;
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
int low=*(min_element(arr,arr+n));
        int high=0;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        int res=*(max_element(arr,arr+n));
        while(low<=high){
            int mid=(low+((high-low)/2));
            if(cansplit(arr,n,m,mid)){
                res=mid;
                high=mid-1;
            } 
            else{
                low=mid+1;
            }
        }
        return res;
    }
};