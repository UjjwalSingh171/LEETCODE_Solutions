class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        for (auto& row : mat) {
            sort(row.begin(), row.end());
        }
        int count = 0 , index = 0 ;

        for(int i = 0 ; i<m ; i++){
            int left=0 , right=n-1 , firstone = n ;

            while(left<=right){
            
                int mid=left+(right-left)/2;
                if(mat[i][mid]==1) {
                    firstone= mid ;
                    right=mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            int ones = n-firstone;
            if(ones>count){
                count=ones;
                index=i;
            }
        }
        return {index,count};
    }
};