class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int  n = arr.size();
        int ind1 = -1;

        for(int i = 1;i < n; i++){
            if(arr[i-1] < arr[i]){
                ind1 = i-1;
            }
        }
        if(ind1 != -1){
            int ind2 = n-1;
            while(ind2 >= 0){
                if(arr[ind1] < arr[ind2]) break;
                ind2--;
            }
            cout << ind1 <<" " << ind2 << endl;
            swap(arr[ind1], arr[ind2]);
        }

        reverse(arr.begin()+ind1+1, arr.end());
    }
};