class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int n = nums.size();
        int res = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            res ^= nums[i];
        }
        return res;
    }
};