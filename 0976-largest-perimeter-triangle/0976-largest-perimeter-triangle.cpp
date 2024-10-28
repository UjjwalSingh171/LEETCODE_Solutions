class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int max = 0;
        for(int i = n-1 ; i>=2; i--)
        {
            if(nums[i]<nums[i-1]+nums[i-2])
            {
                max = nums[i]+nums[i-1]+nums[i-2];
                break;
            }
        }
        return max;
    }
};