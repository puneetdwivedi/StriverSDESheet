class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        if(m < n){
            return findMedianSortedArrays(arr2, arr1);
        }

        int lo = 0;
        int hi = n;

        while(lo <= hi){
            int c1 = lo+(hi-lo)/2;
            int c2 = (n+m+1)/2 - c1;

            int l1 = (c1 == 0) ? INT_MIN : arr1[c1-1];
            int l2 = (c2 == 0) ? INT_MIN : arr2[c2-1];

            int r1 = (c1 == n) ? INT_MAX : arr1[c1];
            int r2 = (c2 == m) ? INT_MAX : arr2[c2];

            if(l1 <= r2 && r1 >= l2){
                if((n+m)%2 == 1)return double(max(l1, l2));
                else{
                    return (max(l1, l2) + min(r1, r2))/2.0;
                }
            }
            else if(l1 > r2) hi = c1 - 1;
            else lo = c1+1;
        }

        return -1;
    }
};