class Solution{
    public:
void merge(long long arr[],long long lo,long long mid,long long hi,long long &res){
    long long i=lo;
    long long j=mid+1;
    long long k=lo;
    long long temp[hi+1];
    while(i<=mid && j<=hi){
        if(arr[i] > arr[j]){
            res+=(mid+1-i);
            temp[k]=arr[j];
            k++;j++;
        }
        else{
            temp[k]=arr[i];
            k++;i++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;i++;
    }
    while(j<=hi){
        res+=(mid+1-i);
        temp[k]=arr[j];
        k++;j++;
    }
    for(int x=lo;x<=hi;x++){
        arr[x]=temp[x];
    }
}

void merge_sort(long long  arr[],long long  lo,long long  hi,long long &res){
    long long mid=(lo+hi)/2;
    if(lo < hi){
        merge_sort(arr,lo,mid,res);
        merge_sort(arr,mid+1,hi,res);
        merge(arr,lo,mid,hi,res);
    }
}
long long int inversionCount(long long arr[], long long N)
{
    long long int res=0;
    merge_sort(arr,0,N-1,res);
    return res;
}
};