class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>m;
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m.insert({nums[i],i});
        }
        for(int i=0;i<n;i++){
            if(m.count(target-nums[i]) >0 && m[(target-nums[i])] != i){
                res.push_back(i);
                res.push_back(m[(target-nums[i])]);
                break;
            }
        }
        return res;
    }
};