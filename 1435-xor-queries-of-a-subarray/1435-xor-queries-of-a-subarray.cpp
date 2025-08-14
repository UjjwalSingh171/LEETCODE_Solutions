class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        int x = arr[0];
        vector<int> samp ;
        vector<int> output;
        samp.push_back(x);
        for(int i = 1 ; i<n ; i++){
            x ^= arr[i] ;
            samp.push_back(x);
        }
        int m = queries.size();
        for(int i = 0 ; i<m ; i++){
            if(queries[i][0]==0){
                int z = queries[i][1];
                output.push_back(samp[z]) ;
            }
            else{
                int z = queries[i][1];
                int zz = queries[i][0]-1;
                int zzz = samp[z]^samp[zz] ;
                output.push_back(zzz) ;
            }
        }
        return output;
    }
};