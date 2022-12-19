class Solution {
public:
    void reverse(vector<int>&arr,int l,int h){
        while(l<=h){
            swap(arr[l],arr[h]);
            l++;h--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k=k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
    }
};