class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n) return {};

        vector<vector<int>> prime(m,vector<int>(n)) ;
        int k = 0 ;

        for(int i = 0 ; i<m ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                prime[i][j]=original[k++];
            }
        }
        return prime;
    }
};