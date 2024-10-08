class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size() ;
        int maxc = 0;
        int count = 0;
        for(int i = 0 ; i<n ; i++)
        {
            if(nums[i]==0)
            {
                maxc = max(maxc,count);
                count = 0;
            }
            else if(nums[i]==1)
            {
                count++;
            }
        }
        maxc = max(maxc,count);
        return maxc ;
    }
};