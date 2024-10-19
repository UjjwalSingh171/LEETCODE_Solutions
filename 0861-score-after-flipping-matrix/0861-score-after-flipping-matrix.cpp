class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        vector<int> v;
        for (int j = 0; j < n; j++) {
            int count = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0) {
                    count++;
                }
            }
            if (count > (m / 2)) {
                for (int i = 0; i < m; i++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        int sum = 0;
        for(int i = 0 ; i<m ; i++)
        {
            int x = 1;
            for(int j = n-1 ; j>=0 ; j--)
            {
                sum += x*grid[i][j];
                x *= 2;
            }
        }
        return sum;
    }
};