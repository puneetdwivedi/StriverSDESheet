class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        int maj_el = arr[0];
        int count = 1;
        for(int i = 0; i < n; i++){
            if(maj_el  == arr[i]){
                count++;
            }
            else{
                count--;
                if(count == 0){
                    count = 1;
                    maj_el = arr[i];
                }
            }
        }
        return maj_el;
    }
};