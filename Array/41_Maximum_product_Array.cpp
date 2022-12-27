class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        int prod = 1;
        int left_ans = arr[0];
        for(int i = 0; i< arr.size(); i++){
            prod *= arr[i];
            left_ans = max(left_ans, prod);
            if(prod==0) prod = 1;
        }
        
        int right_ans = arr[n-1];
        prod = 1;
        for(int i = n-1; i >= 0; i--){
            prod *= arr[i];
            right_ans = max(right_ans, prod);
            if(prod == 0) prod = 1;
        }
        
        return max(left_ans, right_ans);
    }
};