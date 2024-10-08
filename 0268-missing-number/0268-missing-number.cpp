class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        map<int,bool> mpp;
        for(int i = 0 ; i<=n ; i++)
        {
            mpp[i]=false;
        }
        for(int i = 0 ; i<n ; i++)
        {
            mpp[nums[i]]=true;
        }
        for(int i = 0 ; i<=n ; i++)
        {
            if(!mpp[i])
            {
                return i;
            }
        }
        return -1;
    }
};