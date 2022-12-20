class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int curr=0;
        int res=0;
        for(int j=0;j<n;j++){
            if(nums[j]==1){
                curr++;
            }
            else{
                res=max(curr,res);
                curr=0;
            }
        }
        res=max(res,curr);
        return res;
    }
};