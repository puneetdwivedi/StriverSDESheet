class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> answer;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            int j = i+1;
            int k = n-1;
            while(j < k){
                if(arr[j]+arr[k]+arr[i] > 0){
                    k--;
                }
                else if(arr[j]+arr[k]+arr[i] < 0){
                    j++;
                }
                else{
                    answer.push_back({arr[i], arr[j], arr[k]});
                    j++;
                    while(j < k && arr[j-1]==arr[j]) j++;
                    k--;
                    while(k > j && arr[k+1] == arr[k])k--;
                }
            }

            while(i+1 < n && arr[i] == arr[i+1]) i++;
        }

        return answer;
    }
};