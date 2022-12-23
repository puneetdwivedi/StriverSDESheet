class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int firstCol = 0;
        int lastCol = n-1;

        while(firstCol < lastCol){
            for(int i = 0;i < n; i++){
                swap(matrix[i][firstCol], matrix[i][lastCol]);
            }
            firstCol++;
            lastCol--;
        }

        for(int i = 0; i < n-1; i++){
            for(int j = 0;j < n-i-1; j++){
                swap(matrix[i][j], matrix[n-1-j][n-1-i]);
            }
        }
    }
};