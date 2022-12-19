class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int mx = arr[0];
        for(auto el : arr) mx = max(mx, el);
        
        return mx;
    }
};