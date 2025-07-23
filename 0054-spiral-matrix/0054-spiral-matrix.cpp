class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();

        int sc = 0, ec = m - 1, sr = 0, er = n - 1;
        vector<int> res;

        while (sc <= ec and sr <= er) {
            for (int i = sc; i <= ec; i++) {
                res.push_back(matrix[sr][i]);
            }
            sr++;
            for (int i = sr; i <= er; i++) {
                res.push_back(matrix[i][ec]);
            }
            ec--;

            if (sr <= er) {
                for (int i = ec; i >= sc; i--) {
                    res.push_back(matrix[er][i]);
                }
                er--;
            }

            if (sc <= ec) {
                for (int i = er; i >= sr; i--) {
                    res.push_back(matrix[i][sc]);
                }
                sc++;
            }
        }
        return res;
    }
};