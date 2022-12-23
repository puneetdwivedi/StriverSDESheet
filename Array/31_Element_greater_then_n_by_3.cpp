class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        
        int el1 = 0;
        int el2 = 0;
        int c1 = 0;
        int c2 = 0;
        
        for(int i = 0;i < n; i++){
            if(el1 == arr[i])c1++;
            else if(el2 == arr[i])c2++;
            else if(c1 == 0){
                el1 = arr[i];
                c1 = 1;
            }
            else if(c2 == 0){
                el2 = arr[i];
                c2 =1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for(auto x : arr){
            if(x == el1) c1++;
            else if(x == el2) c2++;
        }
        vector<int> res;
        if(c1 > n/3)
            res.push_back(el1);
        if(c2 > n/3)res.push_back(el2);
        return res;
        
        
    }
};