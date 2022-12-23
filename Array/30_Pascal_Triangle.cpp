class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        vector<int> tmp(1,1);
        res.push_back(tmp);
        if(numRows == 1) return res;
        tmp.push_back(1);
        res.push_back(tmp);

        
        for(int i = 2; i < numRows; i++){
            vector<int> row(i+1,1);
            
            for(int j = 1; j <i; j++){
                row[j] = res[i-1][j-1] + res[i-1][j];
                // cout << row[j] << " ";
            }
            // cout << endl;
            
            res.push_back(row);
        }
        
        
        return res;
    }
};