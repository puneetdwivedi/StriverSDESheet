class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n  = arr.size();
        vector<vector<int>> answer;
        sort(arr.begin(), arr.end());
        for(int i = 0; i< n; i++){
            for(int j = i+1; j < n; j++){
                int l = j+1;
                int r = n-1;
                long long int leftSum = target - (long long int)(arr[i]) - (long long int)(arr[j]);

                while(l < r){
                    if((long long int)(arr[l])+arr[r] > leftSum) r--;
                    else if(arr[l] + arr[r] < leftSum) l++;
                    else{
                        answer.push_back({arr[i], arr[j], arr[l], arr[r]});
                        l++;
                        while(l < r && arr[l-1] == arr[l]) l++;
                        r--;
                        while(r > l && arr[r+1] == arr[r]) r--;
                    }
                }
                while(j+1 < n && arr[j] == arr[j+1]) j++;
            }
            while(i+1 < n && arr[i] == arr[i+1]) i++;
        }

        return answer;
    }
};