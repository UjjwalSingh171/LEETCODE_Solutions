class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Find max element in this column
            int maxRow = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int leftNeighbor  = (mid - 1 >= 0)   ? mat[maxRow][mid - 1] : -1;
            int rightNeighbor = (mid + 1 < n)    ? mat[maxRow][mid + 1] : -1;

            // Check if current element is a peak
            if (mat[maxRow][mid] > leftNeighbor && mat[maxRow][mid] > rightNeighbor) {
                return {maxRow, mid};
            }

            // Move search space
            if (leftNeighbor > mat[maxRow][mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return {-1, -1}; // should never reach
    }
};