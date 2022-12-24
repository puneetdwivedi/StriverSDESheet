class Solution {
    
    bool static comp(vector<int> &el1, vector<int> &el2){
        if(el1[0] < el2[0]) return true;
        else if(el1[0] == el2[0]){
            if(el1[1] == el2[1]) return true;
        }
        
        return false;
    }
    
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        
        int n = intervals.size();
        if(n == 0) return result;
        
        sort(intervals.begin(), intervals.end(), comp);
        int x = intervals[0][0];
        int y = intervals[0][1];
        
        for(int i = 1; i < n; i++){
            if( intervals[i][0] <= y){
                y = max(intervals[i][1], y);
            }
            else{
                result.push_back({x, y});
                x = intervals[i][0];
                y = intervals[i][1];
            }
        }
        result.push_back({x, y});
        return result;
    }
};