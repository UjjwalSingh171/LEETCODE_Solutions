class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
            return {};
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v;
        int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1;
        int count = 0;
        int total = n * m;
        
        while (minr <= maxr && minc <= maxc) {
            for (int i = minc; i <= maxc && count < total; i++) {
                v.push_back(matrix[minr][i]);
                count++;
            }
            minr++;
            for (int i = minr; i <= maxr && count < total; i++) {
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            for (int i = maxc; i >= minc && count < total; i--) {
                v.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            for (int i = maxr; i >= minr && count < total; i--) {
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }
        return v;
    }
};