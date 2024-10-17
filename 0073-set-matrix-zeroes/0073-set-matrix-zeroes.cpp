class Solution {
public:
    void setrowZero(vector<vector<int>>& matrix, int i) {
        for (int k = 0; k < matrix[0].size(); k++) {
            matrix[i][k] = 0;
        }
    }
    void setcolZero(vector<vector<int>>& matrix, int j) {
        for (int k = 0; k < matrix.size(); k++) {
            matrix[k][j] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> vi;
        vector<int> vj;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    vi.push_back(i);
                    vj.push_back(j);
                }
            }
        }
        for( int i : vi)
        {
            setrowZero(matrix,i);
        }
        for(int j : vj)
        {
            setcolZero(matrix,j); 
        }
        return;
    }
};