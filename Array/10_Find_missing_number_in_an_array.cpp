// maths
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long int totalSum = (n*(n+1))/2;

        long long int currSum = 0;
        for(auto el : nums) currSum += el;

        return (totalSum - currSum);

    }
};

// using xor
