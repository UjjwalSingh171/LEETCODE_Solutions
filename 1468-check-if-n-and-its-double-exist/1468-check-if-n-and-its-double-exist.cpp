class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool flag = false ;
        for(int i = 0 ; i<n-1 ; i++)
        {
            for(int j = i+1 ; j<n ; j++)
            {
                if((arr[i]*2)==arr[j])
                {
                    flag = true ;
                }
                else if((arr[j]*2)==arr[i])
                {
                    flag = true;
                }
                else
                {
                    continue;
                }
            }
        }
        return flag;
    }
};