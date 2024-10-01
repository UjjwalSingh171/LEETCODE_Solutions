class Solution {
public:
    void moveZeroes(vector<int>& nums) 
{
    int n = nums.size() ;
    int notz = 0 ; 
    for(int i = 0 ; i<n ; i++)
    {
        if(nums[i]!=0)
        {
            nums[notz++]=nums[i];
        }
    }
    for(int i = notz ; i<n ; i++)
    {
        nums[i]=0;
    }
}
};
