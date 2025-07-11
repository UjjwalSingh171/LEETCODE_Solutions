class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        if(m*n != original.size())
        {
            return {};
        }

        vector<vector<int>> product(m, vector<int>(n));
        int x = 0;
        for(int i = 0 ; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                product[i][j]=original[x++];
            }
        }
        return product;
    }
};